import java.util.Scanner;

public class checkSubset {

    public static void removeElement(int arr[], int index) // to remove element at a specified index and shift elements to the right of index
     {
        int size = arr.length;
        for (int j = index; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = 0;
        size--;
    }

    public static boolean check(int arr1[], int arr2[]) // to check if arr2[] is a subset of arr1[]
    {
        boolean isSubset = true;
        int size1 = arr1.length;
        int size2 = arr2.length;
        for (int i = 0; i < size2; i++) {
            boolean found = false;
            for (int j = 0; j < size1; j++) {
                if (arr2[i] == arr1[j]) {
                    found = true;
                    removeElement(arr1, j);
                    size1--;
                    break;
                }
            }
            if (!found) {
                isSubset = false;
                break;
            }
        }
        return isSubset;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter n : ");
        int n = sc.nextInt();
        int A[] = new int[n];
        int arrCopy[] = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.println("Enter A[" + i + "] : ");
            A[i] = sc.nextInt();
            arrCopy[i] = A [i];
        }

        System.out.println("\nEnter m : ");
        int m = sc.nextInt();
        int B[] = new int[m];
        for (int j = 0; j < m; j++) {
            System.out.println("Enter B[" + j + "] : ");
            B[j] = sc.nextInt();
        }

        System.out.print(("A : "));
        for (int i = 0; i < n; i++) {
            System.out.print(A[i] + ", ");
        }

        System.out.print(("B : "));
        for (int i = 0; i < m; i++) {
            System.out.print(B[i] + ", ");
        }

        if (check(arrCopy, B))
            System.out.println("\nB IS A SUBSET OF A");
        else
            System.out.println("\nB IS NOT A SUBSET OF A");

        sc.close();
    }

}