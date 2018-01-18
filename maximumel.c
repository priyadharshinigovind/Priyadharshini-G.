#include<stdio.h>
void main()
{
int lim,a[40],i,j,temp;
printf("Enter limit, list of elements");
scanf("%d",&lim);
for(i=0;i<lim;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[j];
}
else
{
temp=a[i];
}
}
}
printf("the max is %d", temp);
}
