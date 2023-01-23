/* A Fibonacci Sequence is defined as follows: the first and second terms in the sequence are 0 and 1. Subsequent 
terms are found by adding the preceding two terms in the sequence. Write a C program to generate
the first n terms of the sequence.
*/

#include <stdio.h>

void main()
{
int num1=0, num2=1,no,counter,fab;
clrscr(;

printf("<===========PROGRAM TO FIND THE FIBONACCI SERIES UP TO N NO. IN SERIES=========>");
printf("\n\n\n\t\tENTER LENGTH OF SERIES (N) : ");
scanf("%f",&no);

printf("\n\n\t\t\t<----FIBONACCI SERIES---->");
printf("\n\n\t\t%d  %d",&num1,num2);

//LOOP WILL RUN FOR 2 TIME LESS IN SERIES AS THESE WAS PRINTED IN ADVANCE
for(counter = 1; counter <= no-2; counter+)
{
fab=num1 + num2;
printf("  %d",&fab);
num1=num2;
num2=fab;
}
getch();
}
