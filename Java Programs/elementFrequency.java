import java.util.Scanner;

public class elementFrequency {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no of elements : ");
        int n = sc.nextInt();

        int arr[] = new int[n + 1];
        int freq[] = new int [10];

        System.out.println("Enter " + n + " elements : ");
        for (int i = 1; i <= n; i++) {
            arr[i] = sc.nextInt();
            freq[arr[i]]++;
        }
    

        System.out.println("Output : ");
        for (int i = 1; i <= n; i++) {
            System.out.print(freq[i] + " ");
        }
        sc.close();
    }

}
