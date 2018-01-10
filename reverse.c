#include<stdio.h>
void main()
{
int a,rem,sum;
printf("enter a number");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
sum=sum*10+r;
a=a/10;
}
printf("the reverse of the number is %d ", sum);
}
