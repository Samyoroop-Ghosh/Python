import java.util.Scanner;

public class Assignment_1 
{

	static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args) 
	{
		int choice=0;
		
		do
		{
			System.out.println("\n\tASSIGNMENT 1\n");
			System.out.println("1. PRINT YOUR NAME");
	        System.out.println("2. ADD TWO NUMBERS");
	        System.out.println("3. CONVERT CELSIUS TO FAHRENHEIT");
	        System.out.println("4. CONVERT FAHRENHEIT TO CELSIUS");
	        System.out.println("5. CALCULATE AREA AND PERIMETER OF A RECTANGLE");
	        System.out.println("6. CALCULATE AREA AND PERIMETER OF A CIRCLE");
	        System.out.println("7. CHECK IF A NUMBER IS ODD OR EVEN");
	        System.out.println("8. CHECK IF A NUMBER IS POSITIVE OR NEGATIVE");
	        System.out.println("9. FIND THE MAXIMUM OF THREE NUMBERS");
	        System.out.println("10. SWAP TWO NUMBERS");
	        System.out.println("11. CONVERT MILES TO KILOMETERS");
	        System.out.println("12. CHECK IF A YEAR IS A LEAP YEAR");
	        System.out.println("13. CALCULATE GRADE BASED ON PERCENTAGE");
	        System.out.println("14. CHECK IF A NUMBER IS DIVISIBLE BY 5");
	        System.out.println("\nENTER YOUR CHOICE : ");
	        choice = sc.nextInt();
	        sc.nextLine();
	        
	        switch(choice)
			{
			case 1 :
				printName();
				break;
			case 2 :
				printSum();
				break;
			case 3 :
				celciusToFahrenheit();
				break;
			case 4 :
				fahrenheitToCelcius();
				break;
			case 5 :
				rectangle();
				break;
			case 6 :
				circle();
				break;
			case 7 :
				oddOrEven();
				break;
			case 8 :
				positiveOrNegative();
				break;
			case 9 :
				max3Numbers();
				break;
			case 10 :
				swapNumbers();
				break;
			case 11 :
				mToKm();
				break;
			case 12 :
				leapYear();
				break;
			case 13 :
				percentToGrade();
				break;
			case 14 :
				divisibleBy5();
				break;
			default :
				System.out.println("\nInvalid Input. \nExiting Now...");
				choice=0;
			}
	        
	     } while(choice!=0);
		
	}//EOM
	
	static void printName()
	{
		System.out.println("Enter your name : ");
		String str = sc.nextLine();
		System.out.println("Hello there ! The name's " + str);
	}
	
	static void printSum()
	{
		System.out.println("Enter 2 numbers : ");
		int a = sc.nextInt();
		int b = sc.nextInt();
		int sum=0;		
		sum = (a+b);		
		System.out.println("Sum of " + a + " and " + b + " = " + sum);
	}
	
	static void celciusToFahrenheit()
	{
		System.out.println("Enter Temperature in Celcius : ");
		double ctemp = sc.nextDouble();
		double ftemp = ( (9*ctemp)/5) + 32;
		System.out.println(ctemp + "' C <-> " + ftemp + "' F");				
	}
	
	static void fahrenheitToCelcius()
	{
		System.out.println("Enter Temperature in Fahrenheit : ");
		double ftemp = sc.nextDouble();
		double ctemp = ( (ftemp-32)*5) / 9;
		System.out.println(ctemp + "' C <-> " + ftemp + "' F");		
	}
	
	static void rectangle()
	{
		System.out.println("Enter Length and Breadth of Rectangle : ");
		int l = sc.nextInt();
		int b = sc.nextInt();
		int peri = 0, area = 0;
		peri = 2 * (l+b);
		area = (l * b);
		System.out.println("Perimeter : " + peri);
		System.out.println("Area : " + area);
	}
	
	static void circle()
	{
		System.out.println("Enter Radius of Circle : ");
		int r = sc.nextInt();
		double circum = 0, area = 0;
		circum = ((2 * 22 * r)/7);
		area = ((22 * r * r)/7);
		System.out.println("Circumference : " + circum);
		System.out.println("Area : " + area);
	}
	
	static void oddOrEven()
	{
		System.out.println("Enter a number : ");
		int n = sc.nextInt();
		if(n%2 == 0)
			System.out.println(n + " is EVEN.");
		else
			System.out.println(n + " is ODD.");
	}
	
	static void positiveOrNegative()
	{
		System.out.println("Enter a number : ");
		int n = sc.nextInt();
		if(n > 0)
			System.out.println(n + " is POSITIVE.");
		else if (n < 0)
			System.out.println(n + " is NEGATIVE.");
		else
			System.out.println(n + " is ZERO");
	}
	
	static void max3Numbers()
	{
		System.out.println("Enter 3 numbers : ");
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int max = Math.max(a, Math.max(b, c));	
		System.out.println("Max : " + max);
	}
	
	static void swapNumbers()
	{
		System.out.println("Enter 2 numbers : ");
		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.println("A : " + a + " B : " + b);
		int temp = 0;		
		temp = a;
		a = b;
		b = temp;
		System.out.println("After Swapping... \nA : " + a + " B : " + b);
	}
	
	static void mToKm()
	{
		System.out.println("Enter Distance in Miles : ");
		double m = sc.nextDouble();
		double km = (1.60934 * m);
		System.out.println(m + " Miles <-> " + km + "' Kilometres");	
	}
	
	static void leapYear()
	{
		System.out.println("Enter a year : ");
		int year = sc.nextInt();
		boolean flag = false;

		if(year%100 == 0)
		{
			if(year%400 == 0)
				flag = true;
		}
		else if (year%4 == 0)
			flag = true;
		
		if(flag == true)
			System.out.println(year+" IS A LEAP YEAR");
		else
			System.out.println(year+" IS NOT A LEAP YEAR");
	}
	
	static void percentToGrade()
	{
		System.out.println("Enter the percentage : ");
		int percent = sc.nextInt();
		char ch = 0;
		
		if (percent >= 90)
			ch = 'A';
		else if (percent >= 80)
			ch = 'B';
		else if (percent >= 70)
			ch = 'C';
		else if (percent >= 60)
			ch = 'D';
		else if (percent >= 40)
			ch = 'E';
		else if (percent < 40)
			ch = 'F';
		
		System.out.println(percent + " % <-> " + ch + " GRADE");
	}
	
	static void divisibleBy5()
	{
		System.out.println("Enter a number : ");
		int n = sc.nextInt();
		
		if(n%5 == 0)
			System.out.println(n + " is DIVISIBLE by 5");
		else
			System.out.println(n + " is NOT DIVISIBLE by 5");
	}

}//EOC
