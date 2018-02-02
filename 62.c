#include<stdio.h>
#include<string.h>
void main()
{
  int i,b=0,n;
  char s[20];
  printf("Enter a string");
  scanf("%s",&s);
  n=strlen(s);
  for(i=0;i<n;i++)
  {
    if((s[i]=='1')||(s[i]=='0'))
    {
    b+=1;
    }
  }
  if(b==n)
  {
    printf("\nThe string is in binary representation");
  }
  else
  {
    printf("\nNot in binary represemtation");
  }
}
