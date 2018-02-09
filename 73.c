#include<stdio.h>
#include<string.h>
int main()
{
int a,b,c;
printf("\nEnter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a<c)
{
  printf("\nThe number is present between limits");
}
else
{
  printf("no");
}
return (0);
}
