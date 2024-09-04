import java.util.Scanner;

public class arrReducedForm {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array : ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        int sortedArr[] = new int[n];

        System.out.println("Enter " + n + " elements : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            sortedArr[i] = arr[i];
        }

        // sorting arr[] and storing sorted array in sortedArr[]
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (sortedArr[i] > sortedArr[j]) {
                    int temp = sortedArr[i];
                    sortedArr[i] = sortedArr[j];
                    sortedArr[j] = temp;
                }
            }

        }

        //replacing arr[i] with their sorted indexes i.e getIndex(sortedArr[i])
        for (int i = 0; i < n; i++) {
            arr[i] = getIndex(sortedArr,arr[i]);
        }

        System.out.println("Output Array : ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }

    //function to get the index of the sorted array
    public static int getIndex(int a[],int x)
    {
        for(int i=0;i<a.length;i++)
        {
            if(x==a[i])
            {
                return i;
            }
        }
        return -1;
    }
}
