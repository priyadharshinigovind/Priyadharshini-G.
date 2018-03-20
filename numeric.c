#include<stdio.h>
void main()
{
char a[100]; int i,flag=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
flag=0;
else
{
flag=1;
break;
}
}
if(flag==1)
printf("\nnot numeric");
else
printf("numeric");
}
