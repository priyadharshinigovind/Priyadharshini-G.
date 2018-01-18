#include<stdio.h>
void main()
{
int l,el[40],i,j,temp;
printf("Enter limit, list of elements");
scanf("%d",&l);
for(i=0;i<l;i++)
{
scanf("%d",&el[i]);
}
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(l[i]<l[j])
{
j++;
}
else
{
temp=el[i];
el[i]=el[j];
el[j]=temp;
j++;
}
}
i++;
}
for(i=0;i<l;i++)
{  
printf("%d", el[i]);
}
