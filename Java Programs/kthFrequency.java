import java.util.Scanner;

public class kthFrequency {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of test cases: ");
        int T = sc.nextInt();

        for (int i = 0; i < T; i++) {
            System.out.print("Enter N : ");
            int N = sc.nextInt();
            System.out.print("Enter K : ");
            int K = sc.nextInt();
            int[] arr = new int[N];
            int[] freq = new int[10];

            System.out.println("Enter " + N + " elements: ");
            for (int j = 0; j < N; j++) {
                arr[j] = sc.nextInt();
                freq[arr[j]]++;
            }

            // Create an array result[]
            int[] result = new int[10];
            int resultCount = 0;

            // Collect digits that appear more than K times in result[]
            for (int num = 0; num < 10; num++) {
                if (freq[num] > K) {
                    result[resultCount++] = num;
                }
            }

            // Sorting the result[]
            for (int a = 0; a < resultCount; a++) {
                for (int b = a + 1; b < resultCount; b++) {
                    if (result[a] > result[b]) {
                        int temp = result[a];
                        result[a] = result[b];
                        result[b] = temp;
                    }
                }
            }

            // Print the result[]
            System.out.println("Output : ");
            if (resultCount == 0) {
                System.out.println("-1");
            } else {
                for (int k = 0; k < resultCount; k++) {
                    System.out.print(result[k] + " ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}
