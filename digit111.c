#include<stdio.h>
void main()
{
	int num,s,r=0,m;
	scanf("%d",&num);
	while(num!=0)
	{
		m=num%10;
		num=num/10;
		r=(r*10)+num;
	}
	while(r!=0)
	{
		s=r%10;
		printf("%d\t",s);
		r=r/10;
	}
}
