#include<stdio.h>

void print_array(int a[],int size);
void bubble_sort(int a[],int size);
void selection_sort(int a[],int size);
void quick_sort(int a[],int low,int high);
void merge_sort(int arr[], int l, int r);

int main()
{
	int choice,arr[6] = {27,15,39,21,28,70};

	while(choice!=9)
	{
	printf("\n\tORIGINAL ARRAY\n");	
	print_array(arr,6);
        printf("\n\nARRAY SORTING\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Quick Sort\n"); 
        printf("4. Merge Sort\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
			case 1 :
				printf("\n\n\t--BUBBLE SORT--");
				bubble_sort(arr,6);
				break;
			case 2 :
				printf("\n\n\t--SELECTION SORT--");
				selection_sort(arr,6);
				break;
			case 3 :
				printf("\n\n\t--QUICK SORT--\n");	
				quick_sort(arr,0,5);
				break;
			case 4 :
				printf("\n\n\t--MERGE SORT--\n");	
				merge_sort(arr,0,5);
				break;
			default :
				printf("ERROR : INVALID INPUT \nEXITING ...");
				return 9;        	
        }
	}
}

void print_array(int *a,int size)
{
	for(int i=0;i<size;i++)
		{
			printf("%d\t",a[i]);	
		}
	printf("\n");
}

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *a,int size)
{
	int count=0;
	for(int i=0;i<size-1;i++)
	{
		
		for(int j=0;j<size-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				swap(&a[j],&a[j+1]);
				count++;
				printf("\nPASS %d : ",count);
				print_array(a,6);	
			}		
		}	
	}
}

void selection_sort(int *a,int size)
{
	int count=0;
	for(int i=0;i<size-1;i++)
	{
		int flag = 0;
		int min = i;
		for(int j=i+1;j<size;j++)
		{
			if(a[j] < a[min])	
			{
				min = j;
			}
		}
		if(min != i)
		{
			swap(&a[min],&a[i]);
			flag = 1;					
		}
				
		if(flag==1)
		{
			count++;
			printf("\nPASS %d : ",count);
			print_array(a,6);
		}
		else
			break;
	}		
}

int partition(int *a,int low,int high)
{
	int pivot=a[low];
	int i=low;
	int j=high;
	while(i<j)
	{
		while(a[i]<=pivot && i < high)
			i++;

		while(a[j]>pivot && j > low)
			j--;

		if(i<j)
			swap(&a[i],&a[j]);	
	}

	swap(&a[low],&a[j]);

	printf("Partitioning around %d : ",a[j]);
	print_array(a,6);
	return j;
}
	
void quick_sort(int *a,int low,int high)
{
	if(low<high)
	{
		int index=partition(a,low,high);
		quick_sort(a,low,index-1); //left sub-array
		quick_sort(a,index+1,high); //right sub-array		
	}			
}

void merge(int *a, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
    int L[n1], R[n2]; 
 
    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[m + 1 + j]; 

    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            a[k] = L[i]; 
            i++; 
        } 
        else { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
    print_array(a, r - l + 1);
} 

void merge_sort(int *a, int l, int r) 
{ 
    if (l < r) 
	{ 
        int m = l + (r - l) / 2; 
        merge_sort(a, l, m); 
        merge_sort(a, m + 1, r);
        merge(a, l, m, r);         
    } 
} 
  


