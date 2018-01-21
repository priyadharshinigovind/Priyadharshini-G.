#include<stdio.h>
void main()
{
char senten[50];
int i,ct=0;
printf("Enter the senet");
scanf("%s",&senten);
for(i=0;senten[i]!=null;i++)
{
if(senten[i]=='*||senetn[i]=='@'||senetn[i]=='#'||senetn[i]=='$')
{
ct++;
}
}
printf("%d",ct);
}
