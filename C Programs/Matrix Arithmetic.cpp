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

void addMatrix(int m1[][10],int m2[][10],int result[][10],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			result[i][j]=m1[i][j]+m2[i][j];
		}
	}
	displayMatrix(result,r,c);	
}

void subtractMatrix(int m1[][10],int m2[][10],int result[][10],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			result[i][j]=m1[i][j]-m2[i][j];
		}
	}
	displayMatrix(result,r,c);	
}

void multiplyMatrix(int m1[][10],int m2[][10],int result[][10],int r1,int c1,int r2,int c2)
{
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			result[i][j]=0;
			for(int k=0;k<c1;k++)
			{
				result[i][j] += m1[i][k]*m2[k][j];
			}
		}
	}
	displayMatrix(result,r1,c2);		
}

void transposeMatrix(int m[][10],int result[][10],int r)
{
	int isSymmetric=1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			result[i][j]=m[j][i];
			if(m[i][j]!=m[j][i])
			{
				isSymmetric=0;
			}			
		}			
	}
	displayMatrix(result,r,r);
	if(isSymmetric==1)
		printf("Matrix is SYMMETRIC.\n");
	else
		printf("Matrix is NOT SYMMETRIC.\n");
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
			printf("M1[%d][%d] = ",i,j);
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
		printf("\n\n1.Matrix Addition\n");
		printf("2.Matrix Subtraction\n");
		printf("3.Matrix Multiplication\n");
		printf("4.Transpose Matrix\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				if(r1==r2 && c1==c2)
					addMatrix(m1,m2,result,r1,c1);
				else
					printf("Rows and columns must be equal for Matrix Addition\n");
				break;
			case 2 :
				if(r1==r2 && c1==c2)
					subtractMatrix(m1,m2,result,r1,c1);
				else
					printf("Rows and columns must be equal for Matrix Subtraction\n");
				break;
			case 3 :
				if(r1==c2)
					multiplyMatrix(m1,m2,result,r1,c1,r2,c2);
				else
					printf("Rows of Matrix 1 must be equal to Columns of Matrix 2 for Matrix Multiplication\n");
				break;
			case 4 :
				if(r1==c1)
				{
					transposeMatrix(m1,result,r1);					
				}
				else
					printf("Rows must be equal to Columns in order to transpose a matrix.\n");
				break;
			default :
				printf("Invalid Input\n");
				return 0;
		}
	}
}
