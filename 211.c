#include<stdio.h>
void main()
{
char day[100];
printf("\nEnter a character");
scanf("%s",day);
if(day=="saturday"||day=="sunday")
{
printf("holiday");
}
else
{
printf("regular day");
}
}
