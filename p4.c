/*factors of given number*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
		printf("\n the factors are %d",i);
		i++;
	}
	
}
