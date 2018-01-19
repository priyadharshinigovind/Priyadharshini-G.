#include<stdio.h>
void main()
{
int hr,min;
printf("enter minutes");
scanf("%d",&min);
  if(min<60)
  {
    printf("0:%d",min);
  }
  elseif(min==60)
  {
    printf("1:00");
  }
  else
  {
    hr=min/60;
    printf("%d",hr);
  }
}
