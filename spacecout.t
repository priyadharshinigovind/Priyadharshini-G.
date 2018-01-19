#include<stdio.h>
void main()
{
int a;
char sen[60],abc=0;
scanf("%s",&sen);
for(a=0;a!="\n";a++)
{
if(a=="\n")
abc=abc+1;
else
a++;
}
printf("%d",abc);
}
