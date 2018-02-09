#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int count,i;
  printf("\nEnter a string");
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
      count+=1;
    }
  }
  if(count!=0)
  {
    printf("\nVowels are present");
  }
return (0);
}
