#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
int n1, n2;
printf("\nEnter two numbers:");
scanf("%d%d", &n1, &n2);
swap(&n1, &n2);       
printf("\n%d%d", num1, num2);
}
void swap(int *xx, int *yy)
{
 *xx = *xx ^ *yy;
 *yy = *xx ^ *yy;
 *xx = *xx ^ *yy;
 }
