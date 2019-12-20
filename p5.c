/*perfect number*/
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==n)
	printf("the number is perfect:",n);
	else
	printf("the number is not perfect:",n);
}
