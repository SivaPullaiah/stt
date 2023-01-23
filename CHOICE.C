/* Write a C program, which takes two integer operands and one operator form the user,
   performs the operation and then prints the result. 
   (Consider the operators +,-,*, /, % and use Switch Statement)
*/

#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,res,ch;
clrscr();
printf("\t   *********************");
printf("\n\tMENU\n");
printf("\t********************");
printf("\n\t(1)ADDITION");
printf("\n\t(2)SUBTRACTION");
printf("\n\t(3)MULTIPLICATION");
printf("\n\t(4)DIVISION");
printf("\n\t(5)REMAINDER");
printf("\n\t(0)EXIT");
printf("\n\t********************");
printf("\n\n\tEnter your choice:");
scanf("%d",&ch);

if(ch<=5 & ch>0)
{
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
}

switch(ch)
{
 case1:
 res=a+b;
 printf("\n Addition:%d",res);


 case2:
 res=a-b;
 printf("\n Subtraction:%d",res);

 case3:
 res=a*b;
 printf("\n Multiplication:%d",res);
 

 case4
 res=a/b;
 printf("\n Division:%d",res);


 case5:
 res=a%b;
 printf("\n Remainder:%d",res);
 

 case0:
 printf("\n Choice Terminated");
 exit();


 default:
 printf("\n Invalid Choice");

getch();
}
