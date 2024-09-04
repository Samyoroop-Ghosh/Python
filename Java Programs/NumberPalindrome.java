import java.util.Scanner;

public class NumberPalindrome 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter a number :");
		int num = sc.nextInt();
		int copy,digit,rev=0;
		copy = num;
		while(copy != 0)
		{
			digit = copy%10;
			copy/=10;
			rev=(rev*10)+digit;
		}
		System.out.println("Reverse of "+num+" is "+rev);
		if(rev==num)
			System.out.println("Hence, Palindrome Number");
		else
			System.out.println("Hence, Not a Palindrome Number");
		sc.close();
		
	}
	

}
