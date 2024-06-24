#include <stdio.h>
#include<string.h>
#include "typedef.h"
#include "headermain.h"

void reserve(slots * ptr_slot[]) {
    extern patient *ptr_patients;
    u8 k;                       /*desired slot input by user*/
    u8 id;                      /*USER ID assigned to the slot chosen by admin*/
    u8 i;                       /*for loop counter for slots number*/
    u8 m=1;                     /*Main While loop condition*/
    static u8 ptr_values=0;            /*Counter for how many slots are reserved*/
    u8 l;                       /*COUNTER for number of IDs to determine when MAX_ID is reached*/
    while(m!=0){

        /*message for the slots being all reserved*/

        if (ptr_values==SLOTS_NUMBER){
            printf("All slots are reserved \n");

        }


        else{                                           /*there is available slots*/
            printf("Available slots are: \n");

            for (i=0;i<SLOTS_NUMBER;i++){

                if (strcmp(ptr_slot[i]->status, "reserved")){       /*If there is slots reserved do not show*/

                    printf("slot %d is %s \n", i+1, ptr_slot[i]->s);
                }


            }

            printf("Please choose the desired slot \n");
            scanf("%hhd", &k);

            printf("Please enter patient ID \n");
            scanf("%hhd", &id);

            /*checking the number of slot entered*/

            if ((!strcmp(ptr_slot[k-1]->status, "reserved"))||(k>5)){
                printf("Slot chosen is not correct\n");
            }
            else{
                /*checking the ID entered whether it exists or not*/
                for (l=0;l<MAX_ID;l++) {

                    if (id == (ptr_patients + l)->ID) {
                        ptr_slot[k - 1]->id = id;

                        strcpy(ptr_slot[k-1]->status, "reserved");     /*changing the status of the slot*/
                        printf("Slot is reserved for the patient!\n");
                        ptr_values+=1;
                        l=20;
                    }

                    else if (l == MAX_ID - 1){
                        printf("Incorrect ID\n");
                    }

                }
            }


        }
        printf("To exit press 0 \nTo reserve another slot press any key \n ");
        scanf(" %hhd", &m);
    }
}
