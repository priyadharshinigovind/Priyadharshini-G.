#include <stdio.h>
int main()
{
  char s[100];
  int c=0,c1=0,i;
  printf("\nEnter a string");
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++)
  {
  if(s[i]>='A'||s[i]<='Z'||s[i]>='a'||s[i]<='z')
  {
    c+=1;
  }
 if(s[i]>=0||s[i]<=9)
  {
    c1+=1;
  }
  }
  if(c!=0&&c1!=0)
  {
    printf("\nTHe string contains both alphabet and string");
  }
  else
  {
    printf("not");
  }
  
return 0;
}
