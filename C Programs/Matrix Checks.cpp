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

void transposeMatrix(int m[][10],int result[][10],int r)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			result[i][j]=m[j][i];
		}
	}
	displayMatrix(result,r,r);
}

void checkSymmetry (int m[][10],int result[][10],int r)
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
		printf("\nMatrix is SYMMETRIC.\n");
	else
		printf("\nMatrix is NOT SYMMETRIC.\n");	
}

void checkSparse(int m[][10],int r,int c)
{
	int count=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(m[i][j]==0)
				count++;
		}
	}
	if(count >= ((r*c)/2))
		printf("\nMatrix is SPARSE.\n");
	else
		printf("\nMatrix is NOT SPARSE.\n");	
}

void checkIdentity(int m[][10],int r)
{
	int isIdentity=1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			if(i==j && m[i][j]!=1)//checks whether the diagonal elementd are = 1 
			{
				isIdentity=0;
				break;
			}
			else if(i!=j && m[i][j]!=0)////checks whether the non-diagonal elementd are = 0
			{
				isIdentity=0;
				break;
			}
		}
	}
	if(isIdentity==1)
		printf("\nMatrix is an IDENTITY MATRIX.\n");
	else
		printf("\nMatrix is not an IDENTITY MATRIX.\n");
}

void sumRowColumn(int m[][10],int r,int c)
{
	// Add elements of each row
    printf("Sum of elements in each row:\n");
    for (int i=0;i<r;i++) 
	{
        int rowSum = 0;
        for (int j=0;j<c;j++) 
		{
            rowSum += m[i][j];
        }
        printf("Row %d: %d\n",i,rowSum);
    }

    // Add elements of each column
    printf("\nSum of elements in each column:\n");
    for (int j=0;j<c;j++) 
	{
        int colSum = 0;
        for (int i=0;i<r;i++) 
		{
            colSum += m[i][j];
        }
        printf("Column %d: %d\n",j,colSum);
    }	
}



int main()
{
	int m1[10][10],result[10][10],r1,c1,choice=0;
	while(1)
	{
		printf("\n\n1.Input the matrix\n");	
		printf("2.Transpose a matrix\n");
		printf("3.Check for Symmetric\n");
		printf("4.Check for Sparse\n");
		printf("5.Check for Identity\n");
		printf("6.Sum of each Row and Column\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				printf("\nEnter the no of rows and columns for Matrix1 : ");
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
				break;
			case 2 :
				if(r1==c1)
				{
					transposeMatrix(m1,result,r1);					
				}
				else
					printf("\nRows must be equal to Columns in order to transpose a matrix.\n");
				break;
			case 3 :
				if(r1==c1)
				{
					checkSymmetry(m1,result,r1);					
				}
				else
					printf("\nRows must be equal to Columns for a matrix to be Symmetric.\n");
				break;
			case 4 :
				checkSparse(m1,r1,c1);
				break;
			case 5 :
				if(r1==c1)
				{
					checkIdentity(m1,r1);					
				}
				else
					printf("\nRows must be equal to Columns for a matrix to be Identity.\n");
				break;
			case 6 :
				sumRowColumn(m1,r1,c1);
				break;
			default :
				printf("\nInvalid Input\nEXITING...");
				return 0;
		}
	}
}
	
