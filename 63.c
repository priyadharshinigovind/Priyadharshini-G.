#include<stdio.h>
#include<string.h>
void main()
{
char s[30];
int i,count=0;
printf("\nEnter a sentence");
scanf("%[^\n]s",s);
printf("%s",s);
for(i=0;s[i]!='\0';i++)
{
  if(s[i]==' ')
  {
    count=count+1;
  }
}
printf("\n%d",count);
}
  
