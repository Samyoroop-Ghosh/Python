import java.util.Scanner;

public class Add3Numbers 
{	
	float a,b,c,sum;
	
	void sum() //Sum function
	{
		sum = a+b+c;
		System.out.println("Sum = "+sum);
	}
	
	Add3Numbers(float x,float y,float z) //Parameterized constructor
	{
		this.a=x;
		this.b=y;
		this.c=z;
	}
	
	public static void main(String[] args) //main function
	{
		System.out.println("--ADD 3 NUMBERS--");
		Scanner sc = new Scanner (System.in);
		
		System.out.println("Enter 3 numbers :");
		float x = sc.nextFloat();
		float y = sc.nextFloat();
		float z = sc.nextFloat();
		Add3Numbers obj = new Add3Numbers(x,y,z);
		obj.sum();	
		sc.close();
	}
}
