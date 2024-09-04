#include<stdio.h>
#include<String.h>

void standard()
{
	int n,copy,digit,count=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	copy =n;
	while(copy!=0)
	{
		copy/=10;
		count++;
	}
	printf("%d has %d digits.",n,count);
}

void stringMethod()
{
	
	char n[30];
	printf("\nEnter the number : ");
	scanf("%s",n);
	int length = strlen(n);
	printf("%s has %d digits.",n,length);
}

int main()
{
	int choice;	
	while(choice!=9)
	{
	printf("\n\n1.Number of digits in a number (std method)\n");
	printf("\n2.Number of digits in a number (string method)\n");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			standard();
			break;
		case 2:
			stringMethod();
			break;
		default :
			printf("\nWrong choice");
			choice=9;
	}
	}
}		
