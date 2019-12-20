#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	while(i<20)
	{
		printf("\n %d X %d =%d",n,i,i*n);
		i++;
	}
}
