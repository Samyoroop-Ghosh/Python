#include<stdio.h>

int isArmstrong(int n)
{
	int digit,prod=0;
	int copy=n;
	while(copy>0)
	{
		digit=copy%10;
		copy/=10;
		prod+=(digit*digit*digit);
	}
	return (prod==n);
}

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\nArmstrong numbers between 1 and %d are ",num);
	for(int i=1;i<=num;i++)
	{
		if(isArmstrong(i)==1)
			printf("%d ",i);	
	}			
}


