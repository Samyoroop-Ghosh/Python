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
	
	printf("Enter search element : ");
	scanf("%d",&n);
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==n)
		{
			printf("%d has been found at arr[%d] position.\n",n,i);
		}
	}
}
