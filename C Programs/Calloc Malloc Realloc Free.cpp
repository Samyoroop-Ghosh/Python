#include<stdio.h>
#include<stdlib.h>

int* creation_malloc(int size);
int* creation_calloc(int size);
int* resize_realloc(int *arr,int n,int n2);
void deletion_free(int *arr);
void display(int *arr,int n);

int main()
{
	int size,n_size=0,choice=0;
	int *arr;
	while(choice!=9)
	{
	printf("\n1. Create array using malloc()");
	printf("\n2. Create array using calloc()");
	printf("\n3. Resize array using realloc()");
	printf("\n4. Display the elements");
	printf("\n5. Delete array using free()");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the size of the array : ");
			scanf("%d",&size);
			arr = creation_malloc(size);
			display(arr,size);
			break;
		case 2:
			printf("Enter the size of the array : ");
			scanf("%d",&size);
			arr = creation_calloc(size);
			display(arr,size);
			break;
		case 3:
			printf("\nEnter new size : ");
			scanf("%d",&n_size);
			arr = resize_realloc(arr,size,n_size);
			display(arr,n_size);
			break;
		case 4:
			if(n_size==0)
				display(arr,size);
			else
				display(arr,n_size);
			break;
		case 5:
			deletion_free(arr);
			break;			
		default:
			printf("Exiting ...");
			choice=9;		
	}
	}
	
}

int* creation_malloc(int n)
{
	int *ptr;
	ptr = (int*) malloc(n*sizeof(int));
	printf("\nEnter %d elements : \n",n);
	
	for(int i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&ptr[i]);
	}	
	return ptr;	
}

int* creation_calloc(int n)
{
	int *ptr;
	ptr = (int*) calloc(n,sizeof(int));
	printf("\nEnter %d elements : \n",n);
	
	for(int i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&ptr[i]);
	}	
	return ptr;	
}

int* resize_realloc(int *arr,int n,int n2)
{
	int *ptr;
	ptr = (int*) realloc(arr,n2*sizeof(int));
	printf("\n%d bytes have been allocated for %d new elements.\n",((n2-n)*sizeof(int)),(n2-n));
	printf("\nEnter %d new elements : \n",(n2-n));
	for(int i=n;i<n2;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&ptr[i]);
	}
	return ptr;	
}

void deletion_free(int *arr)
{
	free(arr);
	printf("\nMemory has been freed.\n");
}

void display(int *arr,int n)
{
	printf("\nArray elements : \n");
	for(int i=0;i<n;i++)
		printf("arr[%d] = %d address = %p\n",i,arr[i],&arr[i]);
}
