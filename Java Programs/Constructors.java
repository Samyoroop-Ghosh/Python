class Student
{
	int roll;
	String name;
	public void showDetails()
	{
		System.out.println("Roll : " + this.roll);
		System.out.println("Name : " + this.name);
	}
	Student()
	{
		System.out.println("Non Parameterised Constructor called :");
		this.roll = 0;
		this.name = "XYZ";
	}	
	Student(int r, String s)
	{
		System.out.println("Parameterised Constructor called :");
		this.roll = r;
		this.name = s;
	}
	Student (Student s2)
	{
		System.out.println("Copy Constructor called :");
		this.roll = s2.roll;
		this.name = s2.name;		
	}
}

public class Constructors {

	public static void main(String[] args) 
	{
		System.out.println("--CONSTRUCTOR--");
		Student s1 = new Student();//Non Parameterised Constructor 
		s1.showDetails();
		Student s2 = new Student(1,"ABC");//Parameterised Constructor 
		s2.showDetails();
		Student s3 = new Student(s2);//Copy Constructor
		s3.showDetails();
	}

}
