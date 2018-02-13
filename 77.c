#include<stdio.h>
void main()
{
  int n,i;
  printf("\nEnter a number");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      printf("\n%d",i);
    }
  }
  }
