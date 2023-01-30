/* Write a C program toe find the roots of a quadratic equation. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int a,b,c,root1,root2;
clrscr();
printf("\n Enter values of a,b,c for finding roots of a quadratic eq:\n");
scanf("%d%d%d",&a,&b,&c);

/*checking condition*/
if(b*b-4*a*c>=0)
{
 root1=(-b+sqrt(b*b-(4*a*c)))/(2*a);
 root2=(-b-sqrt(b*b-(4*a*c)))/(2*a);
 printf("\n*****ROOTS ARE*****\n");
 printf("\n root1=%d\n root2=%d",root1,root2);
}
else
 printf("\n Imaginary Roots.");
 getch();
 }

