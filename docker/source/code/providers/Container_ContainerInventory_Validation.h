#pragma once

#include <algorithm>
#include <dirent.h>
#include <errno.h>
#include <iterator>
#include <set>
#include <sys/types.h>
#include <syslog.h>

#define INVENTORYDIR "/var/opt/microsoft/docker-cimprov/state/ContainerInventory"
#define IMAGEINVENTORYDIR "/var/opt/microsoft/docker-cimprov/state/ImageInventory"

using std::set;

class ContainerInventoryValidation
{
public:
    ///
    /// Constructor
    ///
    ContainerInventoryValidation(bool isImages = false)
    {
        openlog("ContainerInventoryValidation", LOG_PID | LOG_NDELAY, LOG_LOCAL1);

        struct dirent* dt;
        DIR* dir = opendir(isImages ? IMAGEINVENTORYDIR : INVENTORYDIR);

        // Get the container IDs stored previously
        if (dir)
        {
            while ((dt = readdir(dir)) != NULL)
            {
                if (dt->d_name && strlen(dt->d_name) == 64)
                {
                    internalSet.insert(string(dt->d_name));
                }
            }
            closedir(dir);
        }
        else
        {
            syslog(LOG_ERR, "opendir() returned null: %s", strerror(errno));
        }

        closelog();
    }

    ///
    /// Find the container IDs that were deleted
    ///
    /// \param[in] currentContainers Set of container IDs that are still there
    /// \returns Set of container IDs that is in the previous set and not the current
    ///
    set<string> GetDeletedContainers(set<string>& currentContainers)
    {
        set<string> result;
        std::set_difference(internalSet.begin(), internalSet.end(), currentContainers.begin(), currentContainers.end(), std::inserter(result, result.end()));

        return result;
    }

private:
    set<string> internalSet;
};
