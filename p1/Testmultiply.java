package p1;

class Calculator2{
	
	void multiply(int a,int b)
	{
		
		int c=a*b;
		System.out.println("The multipliction is:"+c);
	}
	
	void multiply(double d1,double d2)
	{
		double d3=d1*d2;
		System.out.println("The multiplication is:"+d3);
	}
	
	void multiply(int c1,double c2)
	{
		
		double c3=c1*c2;
		System.out.println("The multiplication is:"+c3);
	}
	
	void multiply(double l1,int l2)
	{
		double l3=l1*l2;
		System.out.println("The multiplication is:"+l3);
	}
}//class multiply end here


public class Testmultiply {

	public static void main(String[] args) {
		
		Calculator2 a1=new Calculator2();
		a1.multiply(12,34);
		a1.multiply(2.6,7.8);
		int c1=12;
		double c2=4.5;
		a1.multiply(c1,c2);
		double l1=7.8;
		int l2=12;
		a1.multiply(l1,l2);
		

	}

}
