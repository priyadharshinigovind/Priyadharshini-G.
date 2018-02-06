#include <stdio.h>
void main()
{
  int n,i,flag=0;
  printf("\nEnter a number");
  scanf("%d",&n);
  for(i=0;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    printf("\nprime number");
  }
  else
  {
    printf("\nNot number");
  }
}
