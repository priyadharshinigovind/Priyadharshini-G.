#include "stdio.h"
int main()
{
  int a,b,c;
  printf("\nEnter two numbers");
  scanf("%d%d",&a,&b);
  c=a-b;
  if(c%2==0)
  {
    printf("\nEven number");
  }
  else
  {
    printf("\nOdd number");
  }
  return 0;
}
