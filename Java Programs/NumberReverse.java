import java.util.Scanner;

public class NumberReverse 
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
                reverse(num);    
                        
        } while (num!=-1);

    sc.close();
    }

    static void reverse(int n)
    {       
            int copy,digit,rev=0;
            copy = n;

            while(copy!=0)
            {
                digit = copy%10;
                rev=(rev*10)+digit;
                copy/=10;
            }

            System.out.println("REVERSE OF "+n+" : "+rev);
    }
}
