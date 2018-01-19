#include<stdio.h>
#include<conio.h>
void main()
{
  int a[70],i,lim=6;
  printf("enter list of elements");
  for(i=0;i<lim;i++)
  scanf("%d",&a[i]);
  for(i=0;i<lim;i++)
  {
    printf("%d   %d",a[i],i);
  }
  
}
