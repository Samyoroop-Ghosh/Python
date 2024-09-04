#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	int arr[n][2];
	for(int i=0;i<n;i++)
	{
		printf("Student %d\n",i+1);
		for(int j=0;j<2;j++)
		{
			if(j==0)
			{
				printf("ENGLISH : ");
				scanf("%d",&arr[i][j]);
			}				
			else if(j==1)
				{
					printf("MATH : ");
					scanf("%d",&arr[i][j]);
				}						
		}
		printf("\n");			
	}
	
	printf("\n\n**MARKS OBTAINED**\n");
	for(int i=0;i<n;i++)
	{
		printf("Student %d\n",i+1);
		for(int j=0;j<2;j++)
		{
			if(j==0)
				printf("ENGLISH : %d ",arr[i][j]);
			else if(j==1)
				printf("MATH : %d ",arr[i][j]);
		}
		printf("\nTOTAL : %d",arr[i][0]+arr[i][1]);
		printf("\n\n");			
	}
	
}
