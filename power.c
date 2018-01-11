#include <stdio.h>
void main()
{
int base,power;
int result = 1;
printf("Enter a base number: ");
scanf("%d", &base);
printf("Enter power: ");
scanf("%d", &power);
while (power != 0)
{
result *= base;
--power;
}
printf("Answer = d", result);
}
