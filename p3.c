#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	if(n%2==1)
	n-=1;
	while(n>=2)
	 
	{
		printf("\n %d",n);
		n-=2;
	}
	
	}

