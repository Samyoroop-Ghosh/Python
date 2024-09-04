#include<stdio.h>

int main()
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if(year%100==0)//for century years
		{
			if(year%400==0)
				printf("\n%d is a LEAP YEAR.",year);
			else	
				printf("\n%d is not a LEAP YEAR.",year);
		}
	else if(year%4==0)
		printf("\n%d is a LEAP YEAR.",year);
	else
		printf("\n%d is not a LEAP YEAR.",year);
}

