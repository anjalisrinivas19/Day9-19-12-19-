#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the value of n:");
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
	    fact=fact*i;
    }
    	printf("the factorial is:%d",fact);
	}

