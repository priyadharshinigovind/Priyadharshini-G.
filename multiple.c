#include<stdio.h>
void main()
{
int n,i,lim,ans;
printf("enter the limit,number");
scanf("%d%d",&lim,&n);
for(i=1;i<=n;i++)
{
ans=n*i;
printf("%d",ans);
}
getch();
}
