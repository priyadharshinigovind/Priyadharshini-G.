#include<stdio.h>
#include<math.h>
int main()
{
int a,r,sum=0;
scanf("%d",a);
while(a!=0)
{
  r=a%10;
  sum=sum*10+r;
  a/=10;
}
while(sum!=0)
{
  r=sum%10;
  if(r%2!=0)
  {
    printf("%d\t",r);
  }
}
return 0;
}
