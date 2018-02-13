#include<stdio.h>
void main()
{
  int a,b,n,i;
  printf("\nEnter a number");
  scanf("%d%d",&a,&b);
  n=a*b;
  for(i=0;i<=n;i++)
  {
    if((i*i)==n)
    {
      printf("yes");
    }
  }
  }
