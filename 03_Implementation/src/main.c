#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h" 
#include "date.h"

void displayBook();
void returnBook();
void requestBook();
void penalityOnBook();



int main()
{

 int input ;

    while (input != '0'){

printf("\n\t\t\t\t ***** Wings College Library ***** ");
printf("\n\t\t\t 1. Display Available Book  \n");
printf("\n\t\t\t 2. Request For Book   \n");
printf("\n\t\t\t 3. Return Book  \n");
printf("\n\t\t\t 4. Penality on Book \n ");
printf("\n\t\t\t 5. Exit of system  \n ");

printf("\n\t\t\t Select one of the option  : ");
scanf("%d",&input);

switch (input)
{
case 1:
    displayBook();
    break;
case 2:
    requestBook();
    break;
case 3:
    returnBook();
    break;
case 4:
    Penality();
    break;      
case 5:
    printf("\n\t\t\t\t***** Thank You for Visiting *****\n");
    exit(0);
    break; 
default:
    printf("\n\t\t\t Invalid Option, Please Enter Right Option !\n");             
}

}
return 0;
}










