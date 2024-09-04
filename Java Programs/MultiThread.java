
class MultithreadingDemo1 extends Thread//Thread creation by extending the Thread class
{
		public void run()
		{
			System.out.println("Thread " + Thread.currentThread().getId() + " is running and was created by extending the Thread class");
		}
}

class MultithreadingDemo2 implements Runnable //Thread creation by implementing java.lang.Runnable interface
{
	public void run()
	{
		System.out.println("Thread " + Thread.currentThread().getId() + " is running and was created by implementing java.lang.Runnable interface");
	}
}

// Main Class
public class MultiThread 
{
	public static void main(String[] args)
	{
		for (int i = 0; i < 5; i++) 
		{			
			MultithreadingDemo1 m1 = new MultithreadingDemo1();
			m1.start();
		}

		for (int i = 0; i < 5; i++) 
		{		
			MultithreadingDemo2 m2 = new MultithreadingDemo2();	
            Thread t1 = new Thread(m2);
            t1.start();
		}
	}
}
