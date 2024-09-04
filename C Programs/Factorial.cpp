#include<stdio.h>

int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return (n*factorial(n-1));
}
	
int main()
{
	int fact=1,num,choice;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("1.Standard Method\n");
	printf("2.Recursive Method\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if(num==0)
				printf("Factorial of 0 = 1");
			for(int i=1;i<=num;i++)
			{
				fact*=i;
			}
			printf("Factorial of %d = %d",num,fact);
			break;
		case 2:
			printf("Factorial of %d = %d",num,factorial(num));
			break;
		default :
			printf("Wrong choice");
		
	}
}


