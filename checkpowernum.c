#include<stdio.h>
int main()
{
int num;
int flag,t;
printf("enter a number");
scanf("%d",&num);
t=num;
flag=0;
while(t!=1)
{
if(t%2!=0)
{
flag=1;
break;
}
else
{
t/=2;
}
}
if(flag==0)
printf("num is power of 2");
else
printf("not power of 2");
return 0;
}
