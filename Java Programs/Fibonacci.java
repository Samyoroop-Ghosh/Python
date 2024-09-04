import java.util.Scanner;

public class Fibonacci 
{
    public static void main(String[] args) 
    {
    Scanner sc = new Scanner (System.in);
    int num;
    do
        {
            System.out.println("\n\nENTER NUMBER OF TERMS : (-1 FOR EXIT)");
            num = sc.nextInt();
            
            if (num >= 0) 
            {
                fibo(num); 
                
                fibo_arr(num);    

                System.out.println("\nFIBONACCI SERIES (USING RECURSION) UPTO "+num+" TERMS :");
                for(int i=0; i<num; i++)
                    System.out.print(fibo_recursion(i)+" ");
            }      
        } while (num!=-1);

    sc.close();
    }

    static void fibo(int n)
    {       
            int a = 0, b = 1, c=1;
            System.out.println("FIBONACCI SERIES (STANDARD) UPTO "+n+" TERMS :");
            System.out.print(a+" "+b+" "+c);

            for(int i=1; i<n-2; i++)
            {           
                a = b;
                b = c;   
                c = a+b;
                System.out.print(" "+c);             
            }
    }

    static void fibo_arr(int n)
    {
        int arr [] = new int[n];
        arr[0] = 0;
        arr[1] = 1;

        for(int i=2; i<n; i++)
            arr[i] = arr[i-1]+arr[i-2];

        System.out.println("\nFIBONACCI SERIES (USING ARRAYS) UPTO "+n+" TERMS :");

        for(int i=0; i<n; i++)
            System.out.print(arr[i]+" ");
    }

    static int fibo_recursion(int n)
    {
        if(n<=1)
            return n;
        else
            return (fibo_recursion(n-1)+fibo_recursion(n-2));
    }

}
