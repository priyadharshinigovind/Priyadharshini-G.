#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0;
printf("enter n");
scanf("%d",&n);
n1=n;
while(n1>0)
{
r=n1%10;
sum=sum*10+r;
n1=n1/10;
}
if(n1==sum)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
