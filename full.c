#include<stdio.h>
void main()
{
char sr[50];
int i;
print("enter thr string");
scanf("%s",&sr);
i=0;
while(sr[i]!="\n")
{
i++;
}
if(sr[i]=="\n")
printf("%s.",sr);
}
