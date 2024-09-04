import java.util.Scanner;

public class ArmstrongNumber 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter a number :");
		int num = sc.nextInt();
		int copy,digit,sum=0;
		copy = num;
		while(copy!=0)
		{
			digit = copy%10;
			copy/=10;
			sum+=(digit*digit*digit);
		}
		System.out.println("Sum of cubes : "+sum);
		if(sum==num)
			System.out.println("Hence, Armstrong Number");
		else
			System.out.println("Hence, Not an Armstrong Number");
		sc.close();
	}

}
