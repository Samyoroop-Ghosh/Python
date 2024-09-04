#include<stdio.h>

int main()
{
	int size,i=0,j=0,pos,data;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	printf("Enter %d elements :\n",size);
	int arr[size]={0};
	while(i<size)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	printf("Array Elements are \n");
	while(j<size)
	{
		printf("arr[%d] = %d\n",j,arr[j]);
		j++;
	}
	
	printf("Enter the index where you want to insert an element : ");
	scanf("%d",&pos);
	printf("Enter the data for the element : ");
	scanf("%d",&data);
	
	for(int k=size;k>pos;k--)
	{
		arr[k]=arr[k-1];
	}
	size++;
	
	arr[pos]=data;
	
	printf("Array Elements are \n");
	for(int k=0;k<size;k++)
	{
		printf("arr[%d] = %d\n",k,arr[k]);
	}
	
	
}
