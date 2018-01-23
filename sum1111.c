#include<stdio.h?
void main()
{
int r,sum=0,n;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum+=r;
n=n/10;
}
printf("%d",sum);
}
