
#include <stdio.h>
int main()
{
  int n;
  printf("\nEnetr number");
  scanf("%d",&n);
  if(n%2!=0)
  {
    printf("nearest even number is: %d",n-1);
  }
  else
  {
    printf("%d",n);
  }
  
return 0;
}
