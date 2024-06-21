#include <stdio.h>
#include "typedef.h"
#include "funcs.h"

void new_patient(void)
{
    extern patient *ptr_patients;   /*patients data*/
    u8 m = 1;                       /* LOOP COUNTER of while loop of adding patients*/
    static u16 ids = 0;             /*Starting ID at 0*/


    // this loop is for adding as many patients as wanted the max is 20;
    while (m != 0)
    {

        // adding patient data

        printf ("Please enter new patient data \n");
        (ptr_patients+ids)->ID = ids;
        printf ("Patient ID is %hd \n", (ptr_patients+ids)->ID);


        printf ("Please enter patient name \n");
        scanf ("%s", (ptr_patients+ids)->name);


        printf("Please enter patient gender \nFor female type f for male type m \n");
        scanf (" %c", &(ptr_patients+ids)->gender);


        printf ("Please enter patient age \n");
        scanf (" %hd", &(ptr_patients+ids)->age);


        // adding ids to add the next patient with new ID
        ids ++;


        // letting the admin decide if they want to add a new patient or not

        printf ("to exit adding new patients press 0\nto continue adding press any key \n");
        scanf ("%hhu", &m);

        // if condition if max limit of patients reached it exits adding
        if (ids == MAX_ID)
        {
            printf ("max number of patients reached New patient mode will exit now \n");
            m = 0;
        }
    }




}

