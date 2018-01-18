#include<stdio.h>
void main()
{
int l,el[40],i,j,temp;
printf("Enter limit, list of elements");
scanf("%d",&l);
for(i=0;i<l;i++)
{
scanf("%d",&l[i]);
}
for(i=0;i<si;i++)
{
for(j=i+1;j<size;j++)
{
if(l[i]>l[j])
{
min=l[j];
j++;
}
else
{
min=l[i];
j++;
}
}
i++;
}
printf("the min is %d", min);
}
