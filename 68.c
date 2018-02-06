#include "stdio.h"
int main()
{
  int n;
  printf("\nEnter number");
  scanf("%d",&n);
  if(n%7==0)
  {
    printf("\nmultiple of 7");
  }
  else
  {
    printf("not multiple of 7");
  }
  return 0;
}
