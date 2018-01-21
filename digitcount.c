#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
int i=0,r;
while(n!=0)
{
r=n%10;
i++;
n/=10;
}
printf("%d",i);
}
