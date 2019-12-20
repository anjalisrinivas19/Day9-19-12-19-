#include<stdio.h>
int main()
{
	int r,n,sum;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
n=n/10;
	}
	printf("the sum of digits is:%d",sum);
}
