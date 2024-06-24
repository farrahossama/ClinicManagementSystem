#include <stdio.h>
#include<string.h>
#include "typedef.h"
#include "headermain.h"

void cancel(slots * ptr_slot[]) {
    u8 i;                       /*for loop counter for slots number*/
    u8 m=1;;                     /*Main While loop condition*/
    u8 k;                       /*desired slot input by user*/
    while(m!=0) {

        /*showing the reserved slots*/

        for (i = 0; i < SLOTS_NUMBER; i++) {
            if (!strcmp(ptr_slot[i]->status, "reserved")) {
                //printf("%d %s",i,ptr[i]->s);
                printf("slot %d of %s is reserved \n for patient %d\n", i + 1, ptr_slot[i]->s, ptr_slot[i]->id);
            }
        }

        /*canceling slot requested by user*/
        printf("Which slot would you like to cancel?\n");
        scanf("%hhd", &k);

        /*making sure chosen slot is reserved*/
        if (k !=0){
            if ((!strcmp(ptr_slot[k - 1]->status, "unreserved")) || (k > 5)) {
                printf("slot chosen is not correct\n");
            } else {
                /*unreserving the slot and removing the patient ID*/

                strcpy(ptr_slot[k - 1]->status, "unreserved");
                ptr_slot[k - 1]->id = ID_DEFAULT;
                printf("Slot Unreserved\n");
            }
        }
        else{
            printf("slot chosen is not correct\n");
        }

        printf("to exit press 0 \nto to cancel another slot press any key \n ");
        scanf(" %hhd", &m);
    }
}

