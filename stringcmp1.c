#include<stdio.h>
void main()
{
char str1[67],str2[234];
int i;
printf("Enter two strings");
scanf("%s%s",&str1,&str2);
l1=strlen(str1);
l2=strlen(str2);
for(i=0;str1[i]!=null;i++)
{
if(str1[i]==str2[i])
{
temp=1;
}
else
{
temp=0;
}
}
if(temp==1)
{
printf("strings are same");
}
else
{
printf("not same");
}
if(l1>l2)
printf("%s",str1);
else
printf("%s",str2);
}
