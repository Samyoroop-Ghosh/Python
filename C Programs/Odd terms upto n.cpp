#include<stdio.h>

int main()
{
	int n;
	printf("Enter the no of terms : ");
	scanf("%d",&n);
	for(int i=1;i<n*2;i++)//running i till n*2 as 1 in 2 consecutive numbers are ODD numbers
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
}

