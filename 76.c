#include<stdio.h>
void main()
{
  int n,i,flag=0;
  printf("\nEnter a number");
  scanf("%d",&n);
  for(i=2;i<n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
    else
    {
      flag=0;
    }
  }
  if(flag==1)
  {
    printf("\nyes");
  }
  else
  {
    printf("no");
  }
}
