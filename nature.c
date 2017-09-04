#include<stdio.h?
void main()
{
int i,sum=0,n;
printf("enter the limit for sum of natural numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("%d",sum);
getch();
}
