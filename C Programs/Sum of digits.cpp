#include<stdio.h>

int sum_recursive(int n)
{
	if(n==0)
		return 0;
	else
	{
		int digit,s;
		digit = n%10;
		n/=10;
		return (digit+sum_recursive(n));		
	}	
}

int sum(int n)
{
	int digit,sum=0;
	while(n!=0)
	{
		digit=n%10;
		n/=10;
		sum+=digit;
	}
	return sum;
}

int reverse(int n)
{
	int digit,rev;
	while(n>0)
	{
		digit=n%10;
		n/=10;
		rev=rev*10+digit;
	}
	return rev;
}

int main() 
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Sum = %d\n",sum(num));
    printf("Sum = %d\n",sum_recursive(num));
    printf("Reverse = %d",reverse(num));
    
}


