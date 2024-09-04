import java.util.Scanner;

public class arrayMinMax {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array : ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        int mm[] = new int[2];

        System.out.println("Enter " + n + " elements : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int min = arr[0];
        int max = arr[0];

        for (int i = 0; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }

            if (arr[i] > max)
                max = arr[i];
        }

        mm[0] = min;
        mm[1] = max;

        for (int i = 0; i < 2; i++)
            System.out.print(mm[i]+" ");
        
        sc.close();
    }

}
