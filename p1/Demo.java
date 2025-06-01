package p1;


class Calculator{
	
	void add(int a,int b)
	{
		
		int c=a+b;
		System.out.println("The addition is:"+c);
	}
	
	void add(double d1,double d2)
	{
		double d3=d1+d2;
		System.out.println("The addition is:"+d3);
		
	}
	void add(int c1,double c2)
	{
		
		double c3=c1+c2;
		System.out.println("Te addition is:"+c3);
	}
	
	void add(double l1,int l2)
	{
		
		double l3=l1+l2;
		System.out.println("The addition is:"+l3);
	}
	
	
	
}//class calculator end here


public class Demo {

	public static void main(String[] args)
	{
		
		Calculator c4=new Calculator();
		c4.add(10,20);
		c4.add(8.9,20.8);
		int c1=30;double c2=5.7;
		c4.add(c1,c2);
		double l1=5.6;
		int l2=30;
		c4.add(l1,l2);
		
		

	}

}
