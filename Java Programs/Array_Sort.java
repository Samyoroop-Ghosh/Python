import java.util.Scanner;

public class Array_Sort 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int choice=0;
		int arr[] = {27,15,39,21,28,70};		
	        	System.out.println("ARRAY  : ");	
	    		printArray(arr,6);
	        	System.out.println("\nARRAY SORTING\n");
		        System.out.println("1. Bubble Sort\n");
		        System.out.println("2. Selection Sort\n");
		        System.out.println("3. Quick Sort\n"); 
		        System.out.println("4. Merge Sort\n");
		        System.out.println("\nEnter your choice: ");
		        choice = sc.nextInt();
		        switch (choice) 
				{
					case 1 :
						System.out.println("\n\n\t--BUBBLE SORT--");
						bubble(arr,6);
						break;
					case 2 :
						System.out.println("\n\n\t--SELECTION SORT--");
						selection(arr,6);
						break;
					case 3 :
						System.out.println("\n\n\t--QUICK SORT--\n");	
						quick(arr,0,5);
						break;
					case 4 :
						System.out.println("\n\n\t--MERGE SORT--\n");	
						//merge_sort(arr,0,5);
						break;
					default :
						System.out.println("ERROR : INVALID INPUT \nEXITING ...");
						System.exit(0);       	
		        }
		        sc.close();
	}

	
	static void printArray(int a[],int size)
	{
		for(int i=0;i<size;i++)
		{
			System.out.print(a[i]+" ");
		}
		System.out.println("\n");
	}
	
	static void swap(int[] arr, int i, int j) 
	{
	    int temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
	}
	
	static void bubble(int a[],int size)
	{
		for(int i=0;i<size-1;i++)
		{
			for(int j=0;j<size-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					swap(a,j,j+1);					
					printArray(a,6);					
				}
			}
		}		
	}
	
	static void selection(int a[],int size)
	{
		int min;
		for(int i=0;i<size-1;i++)
		{
			min = i;
			for(int j=i+1;j<size;j++)
			{
				if(a[j]<a[min])
				{
					min=j;
				}
			}
			if(min!=i)
			{
				swap(a,min,i);
				printArray(a,6);
			}				
		}		
	}
	
	static int partition (int a[],int low,int high)
	{
		int pivot = a[low];
		int i = low;
		int j = high;

		while(i<j)
		{
			while(a[i]<=pivot)
				i++;
			while(a[j]>pivot)
				j--;
			if(i<j)
			{
				swap(a,j,i);				
			}			
		}
		swap(a,j,low);		
		return j;
	}
	
	static void quick(int a[],int low,int high)
	{
		if(low<high)
		{
			int index = partition(a,low,high);
			System.out.println("Partitioning around "+a[index]);
			printArray(a,6);
			quick(a,low,index-1);
			quick(a,index+1,high);
		}		
	}
}
