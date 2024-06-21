#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "typedef.h"
#include "funcs.h"

patient patients[MAX_ID];
patient *ptr_patients=patients;

void main(void)
{
/* Slots data */
    slots *ptr_slot[SLOTS_NUMBER];
    for (u8 i=0;i<SLOTS_NUMBER;i++){
        ptr_slot[i]=(slots*) malloc(sizeof(slots));
        ptr_slot[i]->id=30; /*initializing ids more than MAX ID to not mess with data*/
        strcpy(ptr_slot[i]->status, "unreserved");
    }

    strcpy(ptr_slot[0]->s, "2 to 2:30");
    strcpy(ptr_slot[1]->s, "2:30 to 3");
    strcpy(ptr_slot[2]->s, "3 to 3:30");
    strcpy(ptr_slot[3]->s, "4 to 4:30");
    strcpy(ptr_slot[4]->s, "4:30 to 5");


    /* Choose admin or User mode */

    u8 mode=3;
    while (mode) {
        printf("Please Specify Which Mode \nfor Admin press 1 \nfor User press 2\nto end session press 0\n");
        scanf("%hhd",&mode);
        if (mode == 1)
            admin(ptr_slot);
        else if(mode==2)
            user((const slots **) ptr_slot);
    }


}