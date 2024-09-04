#include<stdio.h>

int main()
{
	while(1)
	{
		int rows,count=1;	
		printf("\nEnter number of rows : ");
		scanf("%d",&rows);
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=i;j++)
			{			
				printf("%d ",count);
				count++;
			}
			printf("\n");
		}				
	}
}
