#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void isPalindrome(char str[]);
void isPalindrome2(char str[]);


int main()
{
	int ch=1;
	char str[20];
	printf("Enter the string : ");
	scanf("%s",str);
	while(ch!=0)
	{
	printf("\t\n1. Check for palindrome usinf strrev()");
	printf("\n2. Check for palindrome without using strrev()");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 :
			isPalindrome(strupr(str));
			break;
		case 2 :
			isPalindrome2(strupr(str));
			break;
		default :
			printf("Invalid Input");
			ch = 0;
	}
 	}
}

void isPalindrome(char *str)
{
	int size = strlen(str);
	char temp[size];

	strcpy(temp,str); //setting temp[] = str[]
	strrev(temp); //setting temp = strrev(temp[])
		
	printf("String : %s\n",str);
	printf("Reversed String : %s\n",temp);
	
	if(strcmp(str,temp) == 0)
		printf("%s is a palindrome :)",str);
	else
		printf("%s is not a palindrome :(",str);
}

void isPalindrome2(char *str)
{
	bool flag;
	int size = strlen(str);
	
	for(int i=0;i<size/2;i++)
	{
		if(str[i] != str[size-i-1])//comparing chars of opposite indexes
		{
			flag = false;//if not equal, break and display NOT PALINDROME
			break;
		}
		else
			flag = true;		
	}	
	
	if(flag == true)
		printf("%s is a palindrome :)",str);
	else
		printf("%s is not a palindrome :(",str);
}


