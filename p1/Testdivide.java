package p1;

class Calculator3{
	
	void divide(int a,int b)
	{
		int c=a/b;
		System.out.println("The dividation is:"+c);
	}
	
	void divide(double d1,double d2)
	{
		double d3=d1/d2;
		System.out.println("The dividation is:"+d3);
	}
	
	void divide(int a1,double a2)
	{
		double c3=a1/a2;
		System.out.println("The dividation is:"+c3);
	}
	
	void divide(double l1,int l2)
	{
		double l3=l1/l2;
		System.out.println("The dividation is:"+l3);
	}
}//class divide end here


public class Testdivide {

	public static void main(String[] args) {
		
		Calculator3 c1=new Calculator3();
		c1.divide(12,45);
		c1.divide(12.4,5.6);
		int a1=12;
		double a2=5.6;
		c1.divide(a1,a2);
		double l1=3.4;
		int l2=34;
		c1.divide(l1,l2);
		
		

	}

}
