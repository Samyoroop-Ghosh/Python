#include<stdio.h>

int main()
{
	int size,n;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	printf("Enter %d elements :\n",size);
	int arr[size]={0};
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}			
		}		
	}
	printf("Sorted Array :\n");
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);	
	}
}
