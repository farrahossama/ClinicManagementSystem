#ifndef TYPEDEF_H
#define TYPEDEF_H
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


typedef unsigned char      u8 ;
typedef unsigned short int u16;
typedef unsigned long  int u32;
typedef signed   char      s8 ;
typedef signed   short int s16;
typedef signed   long  int s32;
typedef float              f32;
typedef double             f64;
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