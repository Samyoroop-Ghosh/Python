#include<stdio.h>

void reverseArray(int *a,int size);
void reverseArray2(int *a,int size);

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
	reverseArray(arr,size);//using a 2nd array
	reverseArray2(arr,size);//without using a 2nd array
}

void reverseArray(int a[],int size)
{
	int rev_a[size];
	for(int i=0;i<size;i++)
	{
		rev_a[i]=a[size-i-1];
	}
	printf("Reversed array :\n");
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = %d\n",i,rev_a[i]);
	}
}

void reverseArray2(int *a,int size)
{
	for(int i=0;i<size/2;i++)//swapping a[i] with a[size-i-1]
	{
	int temp = a[size-i-1];
	a[size-i-1] = a[i];
	a[i] = temp;			
	}
	
	printf("Reversed array :\n");
	for(int i=0;i<size;i++)
	{
		printf("arr[%d] = %d\n",i,a[i]);
	}
}
