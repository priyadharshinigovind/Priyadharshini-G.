#include<stdio.h>
void main()
{
int size,a[40],i,j,temp,middle;
printf("Enter limit, list of elements");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(a[i]<a[j])
{
j++;
}
else
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
j++;
}
}
i++;
}
for(i=0;i<l;i++)
{  
printf("%d", el[i]);
}
middle=(size+1)/2;
for(i=0;i<size;i++)
{
if(a[i]==a[middle])
printf("%d",&a[i]);
}
