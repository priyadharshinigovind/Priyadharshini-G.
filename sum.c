#include<stdio.h?
void main()
{
int i,sum=0,n;
printf("enter the limit for sum of natural numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)   //for loop to sum the numbers
{
sum+=i;
}
printf("%d",sum);
getch();
}
