import java.util.Scanner;

public class addingOnes {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter N : ");
        int n = sc.nextInt();

        System.out.print("Enter K : ");
        int k = sc.nextInt();



        int nArr[] = new int[n+1];
        int kArr[] = new int[k+1];

        

        System.out.println("Enter " + k + " elements : ");
        for (int j = 1; j <= k; j++) {
            kArr[j] = sc.nextInt();
        }

        for (int j = 1; j <= k; j++) {
            for(int i=kArr[j]; i<=n;i++)
            {
                nArr[i] = nArr[i]+1;
            }
        }
        
        System.out.println("Output : ");
        for(int i=1;i<=n;i++)
        {
            System.out.print(nArr[i] + " ");
        }
        sc.close();
    }

}
