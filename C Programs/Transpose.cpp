#include <stdio.h>
#include <string.h>


int main() 
{
	int r,c;
	printf("Enter the no of rows and columns : ");
	scanf("%d %d",&r,&c);
	int m[r][c];
	int trans[c][r]={0};
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				printf("M[%d][%d] = ",i,j);
				scanf("%d",&m[i][j]);
			}
			printf("\n");
		}
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				trans[j][i]=m[i][j];
			}
			printf("\n");
		}
		
		printf("Transpose of Input Matrix : \n");
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<r;j++)
			{
				printf("%d\t",trans[i][j]);
			}
			printf("\n");
		}
	
}
