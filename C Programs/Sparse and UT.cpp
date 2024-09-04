#include<stdio.h>

void displayMatrix(int m[][10],int r,int c)
{
	printf("Matrix : \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}	
}

int isSparse(int m[][10],int r,int c)
{
	int zero_count = 0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(m[i][j]==0)
				zero_count++;
		}
	}
	if(zero_count > (r*c))
		return 1;
	else
		return 0;
}

int isUT(int m[],int r,int c)
{
	
}

void matrixAddition(int m1[][10],int m2[][10],int result[][10],int r)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			result[i][j] = m1[i][j]+m2[i][j];
		}
	}	
	displayMatrix(result,r,r);
}
	
int main()
{
	int m1[10][10],m2[10][10],result[10][10],r1,c1,r2,c2,choice=0;
	
	printf("Enter the no of rows and columns for Matrix1 : ");
	scanf("%d %d",&r1,&c1);
	printf("Enter the elements for Matrix 1 :\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("\tM1[%d][%d] = ",i,j);
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	displayMatrix(m1,r1,c1);
	
	printf("\nEnter the no of rows and columns for Matrix2 : ");
	scanf("%d %d",&r2,&c2);	
	printf("Enter the elements for Matrix 2 :\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("M2[%d][%d] = ",i,j);
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	displayMatrix(m2,r2,c2);
	
	while(1)
	{	
		printf("\n\n1.Sparse Matrix\n");
		printf("2..Matrix Addition\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				if(isSparse(m1,r1,c1) == 1 && isSparse(m2,r2,c2) == 1)
					printf("Both are Sparse Matrices.\n");
				else
					printf("Both are not Sparse Matrices.\n");
				break;
			case 2 :
				if(r1==r2 && c1==c2 && isSparse(m1,r1,c1) == 1 && isSparse(m2,r2,c2) == 1)
					matrixAddition(m1,m2,result,r1);
				else
					printf("Rows and Columns must be equal for Matrix Addition\n");
				break;
			defualt :
				return 0;
		}
	}
}

