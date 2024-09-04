#include<stdio.h>

void isArmstrong()
{
	int n,copy,digit,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	copy=n;
	
	while(copy!=0)
	{
		digit=copy%10;
		copy/=10;
		sum+=(digit*digit*digit);
	}
	
	printf("\nSum of cubes of %d = %d. ",n,sum);
	if(sum==n)
		printf("Hence, ARMSTRONG NUMBER.",n);
	else
		printf("Hence,not an ARMSTRONG NUMBER.",n);
}

int main()
{
	isArmstrong();
}
