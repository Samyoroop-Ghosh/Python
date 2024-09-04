import java.util.Scanner;

public class Factorial 
{
    public static void main(String[] args) 
    {
    Scanner sc = new Scanner (System.in);
    int num;
    do
        {
            System.out.println("\nENTER A NUMBER : (-1 FOR EXIT)");
            num = sc.nextInt();

            if(num>=0)
                fact(num);      
                      
        } while (num!=-1);

    sc.close();
    }

    static void fact(int n)
    {       
            int res = 1;

            if(n != 0 || n != 1)
            {
                for(int i=1; i<=n; i++)
                res*=i;
            }

            System.out.println("Factorial of "+n+" : "+res);
    }
}
