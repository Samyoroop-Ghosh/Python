#include<stdio.h>

int main()
{
	int num,product=1,power;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Enter the power : ");
	scanf("%d",&power);
	if(power==0)
	{
		product=1;
	}
	else if (num==0)
	{
		product=0;
	}
	else
	{
		for(int i=0;i<power;i++)
		{
			product*=num;
		}		
	}
	
	printf("\n%d ^ %d = %d",num,power,product);
}

