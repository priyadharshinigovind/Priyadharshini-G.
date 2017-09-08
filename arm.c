#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,r,n1;
printf("enter a number");
scanf("%d",&n);
n1=n;
while(n1!=0)
{
r=n%10;
sum=sum+r*r*r;
n1=n1/10;
}
if(n1==n)
printf("n is an armstrong number");
else
printf("n is not an armstrong number");
}
