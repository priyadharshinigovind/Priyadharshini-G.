#include<stdio.h>
void main()
{
  int a,b,c,ch;
    printf("\nEnetr numbers");
    scanf("%d%d",a,b);
    printf("\nenter / for division anf % for modulo")
    switch(c)
    {
      case '/':c=a/b;
      printf("\n%d",c);
      break;
       case '%':c=a%b;
      printf("\n%d",c);
      break;
       default:
      printf("\n Invalid");
      }
      printf("\nDo you want to continue?");scanf("%c",&ch)
  
  }
