import java.util.Scanner;

public class nthroot {
    public static void main(String[] args) {
        Scanner sc = new Scanner((System.in));
        System.out.println("Enter power :");
        int n = sc.nextInt();
        System.out.println("Enter prod : ");
        double m = sc.nextDouble();  
        int res = findroot(n, m);
        if(res == 0)
            System.out.println("Any Real Number");
        else
            System.out.println(findroot(n,m) + " ^ " + n + " = " + m);
        sc.close();
    }

    public static int findroot(int power, double prod)
    {
        double result = 1.0;
        if (prod==1)
        {
            if (power==0)
                return 0; //root can be any number
            else if (power!=0)
                return 1; //root is 1
        }
        else
        {
            for(int i=2;i<prod;i++)
            {
                result = Math.pow(i,power);
                if(result==prod)
                    return i;
            }
        }
        return -1;
    }

}
