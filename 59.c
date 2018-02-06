#include <stdio.h>

int main()
{
    int a[10],i,j,max;
    printf("\nEnter 10 numbers ");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                max=a[i];
            }
            else
            {
                max=a[j];
            }
        }
    }
    printf("\n%d",max);
    return 0;
}
