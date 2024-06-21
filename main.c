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
    initialize_slots(ptr_slot);


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