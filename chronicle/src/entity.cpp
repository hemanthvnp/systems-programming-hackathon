#include "../include/entity.hpp"

#pragma pack(push,1)
struct record{
    uint32 id;
    char username[32];
    char email[255];
};
#pragma pack(pop)



