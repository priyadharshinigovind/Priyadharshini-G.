#include<stdio.h>
#include<math.h>
int main()
{
char a[100];
int n,i,n1;
scanf("%d%s",&n,a);
n1=n/2;
for(i=0;a[i]!='\0';i++)
{
  if(a[i]==a[n1])
  {
    a[i]='*';
  }
}
printf("%s",a);
return 0;
}
