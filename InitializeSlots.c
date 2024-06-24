#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "typedef.h"
#include "headermain.h"

void initialize_slots(slots *ptr_slot[]) {
    for (u8 i=0;i<SLOTS_NUMBER;i++){
        ptr_slot[i]=(slots*) malloc(sizeof(slots));
        if (ptr_slot[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1); // Exit if allocation fails
        }
        ptr_slot[i]->id=MAX_ID; /*initializing ids more than MAX ID to not mess with data*/
        strcpy(ptr_slot[i]->status, "unreserved");
    }

    strcpy(ptr_slot[0]->s, "2 to 2:30");
    strcpy(ptr_slot[1]->s, "2:30 to 3");
    strcpy(ptr_slot[2]->s, "3 to 3:30");
    strcpy(ptr_slot[3]->s, "4 to 4:30");
    strcpy(ptr_slot[4]->s, "4:30 to 5");
}
