#include<stdio.h>
void main()
{
int l1,e[40],i,j,temp;
printf("Enter limit, list of elements");
scanf("%d",&l1);
for(i=0;i<l1;i++)
{
scanf("%d",&e[i]);
}
for(i=0;i<l1;i++)
{
for(j=i+1;j<l1;j++)
{
if(l1[i]<l1[j])
{
j++;
}
else
{
temp=e[i];
e[i]=e[j];
e[j]=temp;
j++;
}
}
i++;
}
for(i=0;i<l;i++)
{  
printf("%d", e[i]);
}
