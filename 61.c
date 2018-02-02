#include<stdio.h>
int main()
{
  char sr[70];
  int k,i;
  printf("\nEnter the string and limit");
  scanf("%s%d",&sr,&k);
  for(i=0;i<=k;i++)
  {
    printf("%c",sr[i]);
  }
  return 0;
}
