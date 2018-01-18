#include<stdio.h>
void main()
{
int size,l[40],i,j,min;
printf("Enter limit, list of elements");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&l[i]);
}
for(i=0;i<size;i++)
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
