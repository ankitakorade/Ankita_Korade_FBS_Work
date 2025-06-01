package p1;

class Printer{
	
	
	void print(String str)
	{
	
		System.out.println("The string is:"+str);
		
	}
	
	void print(int a)
	{
		
		System.out.println("The integer value is:"+a);
	}
	
	void print(double d1)
	{
		
		System.out.println("The double value is"+d1);
	}
	void print(char c)
	{
		System.out.println("The character value is"+c);
	}
}//class printer end here


public class Testdemo {

	public static void main(String[] args) {
		
		
		Printer p1=new Printer();
		p1.print("xyz");
		p1.print(10);
		p1.print(20.8);
		p1.print('F');

	}

}
