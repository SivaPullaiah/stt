/* Write a C program to find both the largest  and smallest number in a list of integers*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,min=0,max=0;
clrscr();
printf("enter the array size:");
scanf("%d",&n);
printf("Enter the elements of array");
for(i=0;i<n;i++) // read the elements of an array
scanf("%d",&a[i]);
min=a[0];
max=a[0];
for(i=1;i<n;i++)// read the elements of an array
{
if(a[i]<min)// check the condition for minimum value
min=a[i];
if(a[i]>max)//check the condition for maximum value
max=a[i];
}
printf("maximum value is:%d\n",max);
printf("minimum value is:%d\n",min);
getch();
}