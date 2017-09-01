#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter value");
scanf("%d",&num);
if(num%4==0)
{
printf("leap year");
}
else
{
printf("ordinary year");
}
getch();
}
