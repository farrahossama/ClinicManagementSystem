#ifndef HEADERMAIN_H
#define HEADERMAIN_H

#include "typedef.h"


typedef struct {
    u8 name[10];
    u16 ID;
    u8 gender;
    u16 age;
} patient;

typedef struct
{
    char s[15];
    char status[15];
    u8 id;
}slots;

#define MAX_ID 20
#define ID_DEFAULT 30
#define SLOTS_NUMBER 5

#endif
