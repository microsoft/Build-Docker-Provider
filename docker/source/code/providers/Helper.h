#ifndef _HELPER_H_
#define _HELPER_H_

class Guid
{
public:
    ///
    /// Create a guid and represent it as string
    ///
    static string NewToString()
    {
        uuid_t uuid;
        uuid_generate_random(uuid);
        char s[37];
        uuid_unparse(uuid, s);
        return string(s);
    }
};

#endif /* _HELPER_H_ */
