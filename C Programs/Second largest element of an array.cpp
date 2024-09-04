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
	
	int max=0,max2=0;
	for(int i=0;i<size;i++)
	{
		if(arr[max]<arr[i])
		{
			max=i;//finding index for max element
		}
	}
	
	for(int j=max;j<size-1;j++)
	{
		arr[j]=arr[j+1];//removing max element from the array				
	}
	size--;
	
	for(int i=0;i<size;i++)
	{
		if(arr[max2]<arr[i])//finding index for max2 element
		{
			max2=i;
		}
	}
	printf("Second highest elemet : %d",arr[max2]);
	
}
	
