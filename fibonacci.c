#include<stdio.h>
void main()
{
int a=0,b=1,c,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d%d",a,b);
}

}
