#include<stdio.h>

void findDuplicate(int *a,int size);
void removeDuplicate(int *a,int size);

int main()
{
	int size;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	findDuplicate(arr,size);//fool=proof function to print the dupe elements
	removeDuplicate(arr,size);//function to print the array after removing the dupe elements	
}



void findDuplicate(int *a,int size)
{
	int dupe[10]={0};
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(a[j]==a[i])
			{
				dupe[a[i]]++;
				break;
			}
		}
	}
	printf("Duplicates :\n");
	for(int i=0;i<10;i++)
	{
		if(dupe[i]>1)
			printf("%d X %d times\n",i,dupe[i]);
	}
}

void removeDuplicate(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i;j<size;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<size-1;k++)
				{
					a[k]=a[k+1];					
				}
				size--;
			}
		}		
	}
	printf("Array after removing duplicate elements :\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\n",a[i]);	
	}	
}

