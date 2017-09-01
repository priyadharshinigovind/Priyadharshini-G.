#include<stdio.h>
#include<conio.h>
void main()
{
int number;
printf("Enter a number");
scanf("%d",&number);
clrscr();
if(number>0)
{
printf("The number is positive");
}
if(number=0)
{
printf("The number is equal to zero");
}
if(number<0)
{
printf("the number is negative");
}
getch();
}
