#include<stdio.h>
void main()
{
int a1;
char sen[60],e=0;
scanf("%s",&sen);
for(a1=0;a1!="\n";a1++)
{
if(a1=="\n")
e=e+1;
else
a1++;
}
printf("%d",e);
}
