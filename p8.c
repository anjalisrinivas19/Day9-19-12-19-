#include<stdio.h>
int main()
{
	int r,n,count=0;
	printf("\n enter the value:");
	scanf("%d",&n);	
	while(n>0)
	{
		r=n%10;
		count++;
		n=n/10;
	}
	printf("\n no of didgits are:%d",count);
}
