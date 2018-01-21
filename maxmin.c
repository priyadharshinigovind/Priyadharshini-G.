#include<stdio.h>
void main()
{
int siz,b[40],i,j,temp;
printf("Enter limit and elements");
scanf("%d",&siz);
for(i=0;i<siz;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<siz;i++)
{
for(j=i+1;j<siz;j++)
{
if(b[i]<b[j])
{
temp=b[j];
}
else
{
temp=b[i];
}
}
}
printf("the max is %d", temp);
for(i=0;i<siz;i++)
{
for(j=i+1;j<siz;j++)
{
if(b[i]>b[j])
{
temp=b[j];
}
else
{
temp=b[i];
}
}
}
printf("the max is %d", temp);
}
