#include <stdio.h>

void print_arr(int arr[],int size);

int main() 
{
    int length,n_length;
    printf("Enter the length of the array : ");
    scanf("%d",&length);
    
    int arr[length];
    
	printf("Enter %d elements : \n",length);
	for(int i=0;i<length;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	print_arr(arr,length);
	
	printf("Enter the new length of the array : ");
	scanf("%d",&n_length);
	
	if(n_length>length)
	{
		printf("Enter %d new elements : \n",(n_length-length));
		for(int i=length;i<n_length;i++)
		{
			printf("arr[%d] = ",i);
			scanf("%d",&arr[i]);
		}	
	}
		
	print_arr(arr,n_length);
	
	return 0;
}

void print_arr(int arr[],int size)
{
	printf("\nArray elements are : \n");
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = %d\n",i,*(arr+i));
	}	
}

