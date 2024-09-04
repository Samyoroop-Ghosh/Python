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
		scanf("%d",&arr[i]);
	}
	
	printf("Array Elements are \n");
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	printf("Enter the index where you want to delete an element : ");
	scanf("%d",&pos);
	
	for(int i=pos;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	
	printf("Array Elements are \n");
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}
	
	
