
#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
int a, b;
printf("\nEnter two numbers:");
scanf("%d%d", &a, &b);
swap(&a, &b);       
printf("\n%d%d", a, b);
}
void swap(int *c, int *d)
{
 *c = *c ^ *d;
 *d = *c ^ *d;
 *c = *c ^ *d;
}
