#include<stdio.h>

void fibo_std(int n);
void fibo_arr(int n);
int fibo_recursive(int n);

int main()
{
	int n,choice=1;
	
	while(choice!=0)
	{
	printf("\n\n----FIBONACCI SEQUENCE TECHNIQUES---\n");
	printf("1. STANDARD METHOD\n");
	printf("2. ARRAY METHOD\n");
	printf("3. RECURSIVE METHOD\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	
	switch(choice)
	{
		case 1 :
			fibo_std(n);
			break;
			
		case 2 :		
			fibo_arr(n);
			break;
			
		case 3 :
			printf("First %d terms of Fibonacci : ",n);
			fibo_recursive(n);
			for (int i=0;i<n;i++) 
		   		printf("%d ",fibo_recursive(i));
    		break;
    		
    	default :
    		printf("Invalid Input");
			choice = 0;
	}
	}
}

void fibo_std(int n)
{
	int a = 0,b = 1,c = 1;
	printf("First %d terms of Fibonacci : 0 1 1 ",n);
	for(int i=3;i<n;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d ",c);	
	}
}

void fibo_arr(int n)
{
	int arr[n];
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2;i<n;i++)
	{
		arr[i] = arr[i-1]+arr[i-2];		
	}
	printf("First %d terms of Fibonacci : ",n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);		
	}	
}

int fibo_recursive(int n)
{
	if (n <= 1) 
	    return n;
    else 
	    return (fibo_recursive(n - 1) + fibo_recursive(n - 2));
}


