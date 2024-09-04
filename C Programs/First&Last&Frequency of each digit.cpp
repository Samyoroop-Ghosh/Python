#include<stdio.h>
#include<string.h>

void standard()
{
	int num,copy,digit,ldigit,fdigit,freq[10]={0};
	printf("\nEnter the number : ");
	scanf("%d",&num);
	copy = num;
	ldigit=num%10;//remainder gives us the last digit
	
	while(copy>0) //traversing the entire number
	{
		digit= copy%10;
		freq[digit]++;
		copy/=10;
		printf("ldigit = %d copy = %d\n",digit,copy);
	}
	
	fdigit=digit;
	
	printf("\nFirst Digit : %d \nLast Digit : %d\n",fdigit,ldigit);
	for(int i=0;i<10;i++)
	{
		if(freq[i]>0)
			printf("\n%d occurred %d times",i,freq[i]);		
	}
}

void stringmethod()
{
	int length,freq[150]={0};
	char num[10];
	printf("\nEnter the number : ");
	scanf("%s",num);
	length=strlen(num);
	for(int i=0;i<length;i++)
	{
		freq[int(num[i])]++;
	}
	printf("\nFirst Digit : %c \nLast Digit : %c\n",num[0],num[length-1]);
	
	int temp=num[0];
	num[0]=num[length-1];
	num[length-1]=temp;
	printf("\nAfter swapping first and last digits : ");
	puts(num);
	
	for(int i=0;i<150;i++)
	{
		if(freq[i]>0)
			printf("\n%d occurred %d times",i-48,freq[i]);		
	}
}


int main()
{
	int choice;	
	while(choice!=9)
	{
	printf("\n\n1.First,Last and Frequency of each digit of a number (std method)\n");
	printf("\n2.First,Last and swapping of digits of a number (string method)\n");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			standard();
			break;
		case 2:
			stringmethod();
			break;
		default :
			printf("\nWrong choice");
			choice=9;
	}
	}
}
