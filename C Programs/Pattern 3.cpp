#include<stdio.h>

int main()
{
	for(int i=1;i<=5;i++)//row counter
	{
		for(int k=5;k>i;k--)//space counter
			printf(" ");
			
		for(int j=1;j<=i;j++)//data counter
		{
			printf("%d",(j+1)%2);
		}
			
		printf("\n");
	}
}
