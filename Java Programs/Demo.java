import java.util.Scanner;

class Commision 
{
	int sales;
	double commission()
	{
		return (sales*0.20);
	}
	Commision()
	{
		this.sales = 0;
	}
}

public class Demo
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		Commision c1 = new Commision();
		System.out.println("Enter the sales : ");
		int s = sc.nextInt();
		
		if(s>=0)
		{
			c1.sales = s;
			System.out.println("Commision : "+c1.commission());
		}
		else
			System.out.println("Invalid Input");
		
		sc.close();
	}
}


