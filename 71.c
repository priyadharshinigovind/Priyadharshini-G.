#include<stdio.h>
#include<string.h>
int main()
{
  char s[100],temp;
  int i,j=0;
  printf("\nEnter a string");
  scanf("%s",s);
  i=0;
  j=strlen(s)-1;
  while(i<j)
  {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;
  }
  printf("%s",s);

if(temp==s)
printf("\npalindrome")
return (0);
}
