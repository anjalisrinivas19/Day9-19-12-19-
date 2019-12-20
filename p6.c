#include<stdio.h>
int main()
{
	int r,n;
	printf("\n enter the value:");
	scanf("%d",&n);
	printf("\n reverse number:");
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
