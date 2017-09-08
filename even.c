#include<stdio.h>
void main()
{
int sta,sto,i;
printf("Enter intervals");
scanf("%d%d",&sta,&sto);
for(i=sta;i<sto;i++)
{
if(i%2==0)
{
printf("%d",i);
i++;
}
}
}
