#include<stdio.h>
void main()
{
int siz,a1[10],i,j,tmp;
printf("Enter limit, list of elements");
scanf("%d",&siz);
for(i=0;i<siz;i++)
{
scanf("%d",&a1[i]);
}
for(i=0;i<siz;i++)
{
for(j=i+1;j<siz;j++)
{
if(a1[i]<a1[j])
{
tmp=a1[j];
}
else
{
tmp=a1[i];
}
}
}
printf("the max is %d", tmp);
}
