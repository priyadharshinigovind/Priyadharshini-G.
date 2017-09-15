#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
printf("enter number");
scanf("%d",&n);
 if (n < 0)
        printf("factorial does not exist");

    else
    {
        for(i=1; i<=n; ++i)
        {
            fact *= i;             
        }
        printf("%d", fact);
    }
}
