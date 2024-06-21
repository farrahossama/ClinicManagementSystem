#include <stdio.h>
#include "typedef.h"
#include "funcs.h"
void user(const slots * ptr_slot[]) {
    extern patient *ptr_patients;
    u8 k;                       /*user mode*/
    u8 id;                     /*USER ID that the admin would like to change*/
    u8 l;                       /*COUNTER for number of IDs to determine when MAX_ID is reached*/
    u8 i;                       /*for loop counter for slots number*/
    u8 res=0;                   /*counter to check if patients have any reservations at all to show message*/
    u8 m=1;                    /*Main While loop condition*/
    while(m!=0){

        printf("Please select which user mode\n 1.View your data\n 2. View your reservations\n");
        scanf("%hhd",&k);
        printf("please enter your user ID  \n");
        scanf(" %hhd", &id);

        for (l = 0; l < MAX_ID; l++) {

        if (id == (ptr_patients + l)->ID) {

            /*mode 1 view data*/
            if (k==1) {
                printf("user %d info is \n", (ptr_patients + id)->ID);
                printf("user name is %s \n", (ptr_patients + id)->name);
                printf("user gender %c \n", (ptr_patients + id)->gender);
                printf("user age is %d \n", (ptr_patients + id)->age);
            }
                /*mode 1 view reservations*/
            else if (k==2){
                for (i=0;i<SLOTS_NUMBER;i++) {
                    if (id==ptr_slot[i]->id) {
                        printf("Your reserved slot is at %s\n",ptr_slot[i]->s);
                        res=1;
                    }
                }
                if (res==0){
                    printf("there is no reservations under your name \n ");
                }
            }
            l = MAX_ID;

        } else if (l == MAX_ID-1) {
            printf("incorrect ID \n");

        }

        }
        res=0;
        printf("to exit press 0 \nto view data of another patient press any key \n");
        scanf(" %hhd", &m);
    }
}