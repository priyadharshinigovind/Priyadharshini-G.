#include <stdio.h>
void main()
{
    char al;
    printf("Enter a character: ");
    scanf("%c",&al);

    if( (al>='a' && al<='z') || (al>='A' && al<='Z'))
        printf("%c is an alphabet.",al);
    else
        printf("%c is not an alphabet.",al);
}
