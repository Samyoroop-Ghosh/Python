#include<stdio.h>

void removeDuplicate(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[j]==a[i])
			{
				for(int k=j;k<size;k++)
				{
					a[k]=a[k+1];
				}
				size--;
			}
		}
	}
	printf("Array after removing duplicates :\n");
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = %d\n",i,a[i]);	
	}	
}

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
	removeDuplicate(arr,size);
}

