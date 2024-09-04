import java.util.*;

class BuzzNumber
{
    public static void main (String args[])
    {
        Scanner sc = new Scanner (System.in);
        int num;
        do
        {
            System.out.println("\nENTER A NUMBER : (-1 FOR EXIT)");
            num = sc.nextInt();
            if(num<0)
                System.out.println("ENTER A POSITIVE NUMBER");
            else if(num%10==7 || num%7 == 0) //ends with  or divisible by 7
                System.out.println(num + " IS A BUZZ NUMBER");
            else
                System.out.println(num +" IS NOT A BUZZ NUMBER");
            
        } while (num!=-1);

        sc.close();
    }
}