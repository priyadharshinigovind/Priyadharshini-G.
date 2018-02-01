#include <stdio.h>
void main()
{
    int num,sum=0,n,r;
    scanf("%d",&num);
    while(num!=0)
    {
     n=num%10;
     sum=(sum*10)+r;
     num=num/10;
    }
    while(sum!=0)
    {
    switch(sum%10)
    {
        case 0:printf("|n zero");
        break;
         case 1:printf("|n one");
        break;
         case 2:printf("|n two");
        break;
         case 3:printf("|n three");
        break;
         case 4:printf("|n four");
        break;
         case 5:printf("|n five");
        break;
         case 6:printf("|n six");
        break;
         case 7:printf("|n seven");
        break;
         case 8:printf("|n eight");
        break;
         case 9:printf("|n nine");
        break;
         default:printf("|n It is not number");
        break;
    }
    sum=sum/10;
    }
    
}
