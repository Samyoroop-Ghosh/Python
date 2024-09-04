#include<stdio.h>

int main()
{
	int i,num1,num2;
	printf("Enter 1st number : ");
	scanf("%d",&num1);
	printf("Enter 2nd number : ");
	scanf("%d",&num2);
	printf("\nHCF/GCD of %d and %d is ",num1,num2);
	for(i=(num1<num2?num1:num2);i>=1;i--)
	{
		if(num1%i==0 && num2%i==0)	
		{
			printf("%d ",i);//only choosing the first value of i as only Highest Comon Factor reqd
			break;
		}
	}
	int lcm = (num1*num2)/i;//formula for LCM,when HCF is known
	printf("\nLCM of %d and %d is %d ",num1,num2,lcm);
	
}
