#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,r,n1,i,j;
printf("enter intervals");
scanf("%d%d",&i,&j);

for(n1=i;n1<j;n++)
{
while(n1!=0)
{
r=n1%10;
sum=sum+r*r*r;
n1=n1/10;
}
if(n1==i)
printf("n1 is an armstrong number");
else
printf("n1 is not an armstrong number");
n1++;
}
}

