#include<stdio.h>

int isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\nPrime Factors of %d are ",num);
	for(int i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			if(isPrime(i))
				printf("%d ",i);	
		}			
	}
}


