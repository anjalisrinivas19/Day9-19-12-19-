/*strong number*/
#include<stdio.h>
int main()
{
	int i,n,fact,sum=0,r,temp;
	printf("\enter the number:");
	scanf("%d",&n);
	  temp=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	  printf("strong");
	else
	 printf("its not a strong number:");  
}
