/*odd loop implementation*/
#include<stdio.h>
main()
{
	int bal=7000,min=5000,ch,avlbal,temp,minbal;
	while(1)
	{
	 printf("\n 1.Deposit");
	 printf("\n 2.Withdraw");
	 printf("\n 3.Show balance");
	 printf("\n 4.exit");	
	 printf("\n enter the choice");
	 scanf("%d",&ch);
	 switch (ch)
	{
		case 1: printf("enter the amount to deposit");
		        scanf("%d",&temp);
		        bal=bal+temp;
		        printf("\n Rs.%d is deposit successful",temp);
		        break;
		case 2: avlbal=bal-minbal; 
		        printf("\n enter amount to draw");
				scanf("%d",&temp);
				if (temp<=avlbal)
				{
				bal=bal-temp;
				printf("\n plz collect cash");
			    }
			    else
			    {
				printf("\n insufficient balance :%d",avlbal);
			    }break;
		case 3: avlbal=bal-minbal;
		        printf("\n Available Balance :%d",avlbal);
				printf("\n Ledger Balance :%d",bal);
				break;
		case 4: exit(0);
		defautl: printf("entered wrong choice");			    
    }
}
}
