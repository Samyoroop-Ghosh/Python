#include<stdio.h>

int main()
{
	int size,pos,data;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	printf("Enter %d elements :\n",size);
	int arr[size]={0};
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	int min=0,max=0;
	for(int i=0;i<size;i++)
	{
		if(arr[min]>arr[i])
			min=i;
			
		if(arr[max]<arr[i])
			max=i;	
	}
	
	printf("Largest element : %d\nSmallest element : %d",arr[max],arr[min]);
}
