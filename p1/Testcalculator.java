package p1;

class Calculator1{
	
   void  substract(int a,int b)
	{
		int c=a-b;
		System .out.println("The subsbtrabction is"+c);
		
	}
   void substract(double b1,double b2)
   {
	   
	   double b3=b1-b2;
	   System.out.println("The substraction is:"+b3);
   }
   
   void substract(int d,double c)
   {
	   double s1=d-c;
	   System.out.println("The substraction is:"+s1);
	   
   }
   
   void substract(double d1,int d2)
   {
	   
	   double d3=d1-d2;
	   System.out.println("The substraction is:"+d3);
   }
   }//class calculator1 end here

public class Testcalculator {

	public static void main(String[] args) {
		
		Calculator1 c1=new Calculator1();
		c1.substract(50,30);
		c1.substract(56,2.9);
		int d=30;
		double c=3.9;
		c1.substract(d,c);
		double d1=5.6;
		int d2=50;
		c1.substract(d1,d2);

	}

}
