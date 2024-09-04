#include<stdio.h>


void inputMatrix(int matrix[][10],int r,int c)
{
	printf("Enter the elements of %dX%d matrix :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
}

void displayMatrix(int m[][10],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}

void addMatrix(int m1[][10],int m2[][10],int sum[][10],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			sum[i][j] = m1[i][j]+m2[i][j];
		}
	}
}

void multiplyMatrix(int m1[][10],int m2[][10],int prod[][10],int r1,int c1,int r2,int c2)
{
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			prod[i][j]=0;
			for(int k=0;k<c1;k++)
			{
				prod[i][j] += (m1[i][k] * m2[k][j]); 
			}
		}
	}	
}

void checkSparse(int m1[][10],int r1,int c1)
{
	int zero_count=0;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			if(m1[i][j]==0)
				zero_count++;
		}
	}
	if (zero_count > ((r1*c1)/2))
		printf("Matrix is a SPARSE MATRIX\n")	;
	else
		printf("Matrix is not a SPARSE MATRIX\n");
}

void transposeMatrix(int m1[][10],int trans[][10],int r1,int c1)
{
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			trans[j][i]=m1[i][j]; //transpose logic
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	
	
}


void checkSymmetric(int m1[][10],int r1,int c1)
{
	int isSymmetric=1;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			if(m1[i][j]!=m1[j][i])
				{
					isSymmetric=0;
					break;
				}
		}
	}
	if(isSymmetric==1)	
		printf("Matrix is SYMMETRIC");
	else
		printf("Matrix is NOT SYMMETRIC");
}

int main()
{
	int rows1=0,columns1=0,rows2=0,columns2=0,choice=0;
	int matrix1[10][10],matrix2[10][10],sum[10][10],prod[10][10],trans[10][10];
	
	
	while(choice!=9)
	{
		printf("\n\nMatrix Operations Menu:\n");
        printf("\n1. Input and display MATRIX 1\n");        
        printf("\n2. Addition of the two matrices\n");
        printf("\n3. Multiplication of the two matrices\n");
        printf("\n4. Check for sparse matrix\n");
        printf("\n5. Check for symmetric matrix\n");
        printf("\n6. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        	case 1 :
        		printf("Enter rows and columns for MATRIX 1 : ");
				scanf("%d %d",&rows1,&columns1);
        		inputMatrix(matrix1,rows1,columns1);
        		printf("MATRIX 1 :\n");
        		displayMatrix(matrix1,rows1,columns1);        		
        		break;
        	case 2 :
        		printf("Enter rows and columns for MATRIX 2 : ");
				scanf("%d \n %d",&rows2,&columns2);
				
        		if(rows1==rows2 && columns1==columns2)//condition for matrix addition
        		{
        			inputMatrix(matrix2,rows2,columns2);
        			addMatrix(matrix1,matrix2,sum,rows1,columns1);
        			printf("SUM MATRIX :\n");
        			displayMatrix(sum,rows1,columns1);
				}
				else
					printf("Matrix Addition only possible when rows1=rows2 & colums1=colums2\n");					
				break;
			case 3 :
				printf("Enter rows and columns for MATRIX 2 : ");
				scanf("%d \n %d",&rows2,&columns2);
				
				if(columns2 == rows1)//condition for matrix multiplication
				{
					inputMatrix(matrix2,rows2,columns2);
					multiplyMatrix(matrix1,matrix2,prod,rows1,columns1,rows2,columns2);
					printf("PRODUCT MATRIX :\n");
					displayMatrix(prod,rows1,columns1);	
				}
				else
					printf("Matrix Multiplication only possible when colums2=rows1");
				break;
			case 4 :
				int ch;
				printf("Do you want to check the already input MATRIX 1 : (0/1) ");
				scanf("%d",&ch);
				if(ch == 1)
				{
					printf("MATRIX 1 :\n");
					displayMatrix(matrix1,rows1,columns1);
					checkSparse(matrix1,rows1,columns1);					
				}
					
				else if(ch == 0)
				{					
					printf("Enter rows and columns for NEW MATRIX : ");
					scanf("%d \n %d",&rows2,&columns2);					
					inputMatrix(matrix2,rows2,columns2);
					printf("NEW MATRIX :\n");
					displayMatrix(matrix2,rows2,columns2);
					checkSparse(matrix2,rows2,columns2);
				}
				break;
			case 5 :				
				printf("Do you want to check the already input MATRIX 1 : (0/1) ");
				scanf("%d",&ch);
				if(ch == 1)
				{
					if(rows1==columns1)
					{
						printf("MATRIX 1 :\n");
						displayMatrix(matrix1,rows1,columns1);
						printf("TRANSPOSE(MATRIX 1) :\n");
						transposeMatrix(matrix1,trans,rows1,columns1);
						
						checkSymmetric(matrix1,rows1,columns1);
					}
					else
					 printf("Matrix must be a square matrix.\n");
										
				}
					
				else if(ch == 0)
				{
					printf("Enter rows and columns for NEW MATRIX : ");
					scanf("%d \n %d",&rows2,&columns2);
					if(rows2==columns2)
					{					
						inputMatrix(matrix2,rows2,columns2);
						printf("MATRIX 2 :\n");
						displayMatrix(matrix2,rows2,columns2);
						printf("TRANSPOSE(MATRIX 2) :\n");
						transposeMatrix(matrix2,trans,rows2,columns2);
						checkSymmetric(matrix2,rows2,columns2);
					}
					else
					 printf("Matrix must be a square matrix.\n");					
				}
				break;
			case 6 :
				printf("EXITING ..");
				choice=9;
				break;
			default :
				printf("Invalid Input\n");
							
		}
	}	
}
