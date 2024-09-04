#include<stdio.h>
#include<string.h>

void palindrome_Standard()
{
	int n,copy,digit,rev=0,sum=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	copy=n;
	
	for(int i=0;i<n;i++)
	
	while(copy!=0)
	{
		digit=copy%10;
		rev=(rev*10+digit);
		copy/=10;
	}
	
	printf("\nReverse of %d = %d.",n,rev);
	if(rev==n)
		printf("Hence, PALINDROME.",n);
	else
		printf("Hence,not PALINDROME.",n);
}

void palindrome_Strings()
{
	char n[30];
	int flag=1;
	printf("\nEnter the number : ");
	scanf("%s",n);
	int length = strlen(n);
	for(int i=0;i<length/2;i++)
	{
		if(n[i] != n[length-i-1])
		{
			flag=0;
			break;			
		}			
	}
	if(flag==1)
		printf("\n%s is a PALINDROME.",n);
	else
		printf("\n%s is not a PALINDROME.",n);
}

void palindrome_Strings2()
{
	char n[30],copy[30];
	printf("\nEnter the number : ");
	scanf("%s",n);
	
	strcpy(copy,n);
	strrev(copy);
	
	if(strcmp(copy,n)==0)
		printf("\n%s is a PALINDROME.",n);
	else
		printf("\n%s is not a PALINDROME.",n);
}

int main()
{
	palindrome_Standard();
	palindrome_Strings();
	palindrome_Strings2();
}
