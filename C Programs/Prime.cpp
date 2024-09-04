#include<stdio.h>

int isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;						
	}
	return 1;
}
	
int main()
{
	int num,choice;	
	while(choice!=9)
	{
	printf("\n\n1.Check for prime\n");
	printf("\n2.Print Prime numbers between 1 and N\n");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter the number : ");
			scanf("%d",&num);
			if(num==1)
				printf("\n1 is neither PRIME nor COMPOSITE");
			else
			{
				if(isPrime(num)==1)
					printf("\n%d is PRIME.",num);
				else
					printf("\n%d is COMPOSITE.",num);				
			}
			break;
		case 2:
			printf("\nEnter the Nth term  : ");
			scanf("%d",&num);
			for(int j=2;j<=num;j++)
			{
				if(isPrime(j)==1)
					printf("%d ",j);
			}
			break;
		default :
			printf("\nWrong choice");
			choice=9;
		
	}
	}
}


