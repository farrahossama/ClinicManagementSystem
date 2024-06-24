#include <stdio.h>
#include "typedef.h"
#include "headermain.h"

void edit_patient (void)
{
    extern patient *ptr_patients; /*patients data*/
    u16 id;                     /*USER ID that the admin would like to change*/
    u8 k;                        /*Switch condition */
    u8 i;                       /* for loop counter of editing data*/
    u8 n=1;                     /*Main While loop condition*/
    u8 l;                       /*COUNTER for number of IDs to determine when MAX_ID is reached*/

    while(n!=0) {
        //check if ID is correct if condition
        printf("Please enter patient ID for the patient you'd like to edit \n");
        scanf(" %hd", &id);

        for (l = 0; l < MAX_ID; l++) {

            if (id == (ptr_patients + l)->ID) {
                l = MAX_ID;
                printf("Patient %d info is \n", (ptr_patients + id)->ID);
                printf("Patient name is %s \n", (ptr_patients + id)->name);
                printf("Patient gender %c \n", (ptr_patients + id)->gender);
                printf("Patient age is %d \n", (ptr_patients + id)->age);

                for (i = 0; i < 3; i++) {
                    printf("to change name press 1 \nto change gender press 2 \nto change age press 3 \nto exit press 4 \n");
                    scanf(" %hhd", &k);

                    switch (k) {
                        case 1: {
                            printf("please enter new patient name\n");
                            scanf(" %s", (ptr_patients + id)->name);
                            break;
                        }
                        case 2: {
                            printf("please enter new patient gender\n");
                            scanf(" %c", &(ptr_patients + id)->gender);
                            break;
                        }
                        case 3: {
                            printf("please enter new patient age\n");
                            scanf(" %hd", &(ptr_patients + id)->age);
                            break;
                        }
                        default: {
                            i = 4; /*exit for loop*/
                        };
                    }

                }

            }
            else if (l == MAX_ID - 1) {
                printf("Incorrect ID \n");
            }
         }
        printf("to exit press 0 \nto edit another patient press any key\n");
        scanf("%hhd", &n);
    }
}

