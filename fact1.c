#include <stdio.h>
void main()
{
  int n, i;
  int factorial = 1;
  printf("Enter an integer: ");
  scanf("%d",&n);
  if (n < 0)
  printf("Error");
  else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;           
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
}fact1.c
