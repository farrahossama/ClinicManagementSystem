#include <stdio.h>
#include "typedef.h"
#include "funcs.h"

void admin(slots * ptr_slot[])
{
    extern patient *ptr_patients; /*patients data*/

	/* Admin password 3 trials till password =1234 */
	u8 i;                   /*Password Trials COUNTER*/
    u8 m=1;                     /* LOOP COUNTER of admin modes*/
    u8 Current_Mode;             /* Choose Admin Mode Variable*/
    u16 password;

	for (i=0;i<3;i++)
	{

	printf("Please enter system Password \n");
	scanf("%hd",&password);

        /* in the 1st 2 trials if password is incorrect */
	    if (password!=1234 && i!=2)
	    {
		    printf("Incorrect Password trial number %d from 3 \n",i+1);
        }

        /*3rd trial when password is incorrect program exits*/
	    else if (password!=1234 && i==2)
	    {
	        printf("max number of trials reached system will exit \n");
		    break;

	    }

        /*correct password case*/
	    else if (password==1234)
	    {
	        printf("Welcome Admin \n");


            /* admin modes*/
	        while(m!=0)
	        {
	            printf("Please choose a mode \n");
	            printf("To add a New Patient press 1 \n");
	            printf("To Edit Patient Record press 2 \n");
	            printf("To Reserve a slot with the doctor press 3 \n");
	            printf("To Cancel Reservation press 4 \n");
                printf("To Exit admin press 5 \n");

	            scanf("%hhd",&Current_Mode);

	            switch(Current_Mode)
	            {
		            case 1: new_patient(); break;
		            case 2: edit_patient(); break;
		            case 3: reserve(ptr_slot); break ;
		            case 4: cancel(ptr_slot); break;
                    default:{};
	             }

                 /* Exit loop or choose another mode choice*/


	            printf("to exit admin page press 0 \nto choose another mode press any key\n");
	            scanf("%hhu",&m); /*will exit if m==0*/

	        }
            i=3; /*Exit for loop since password is correct after finishing admin work*/
	    }
	}
}