package p1;

class Complexnumber{
	
	void operation(int r,int ima )
	{
		int add=r+ima ;
		System.out.println("The addition of two complex number is:"+add);
	}
	
	
   void operation(double d1,int d2)
   {
	   double sum=d1+d2;
	   System.out.println("The addition of a complex number and an integer is:"+sum);
   }
}//class Complexnumber end here

public class Testcomplex {

	public static void main(String[] args) {
		
		Complexnumber c1=new Complexnumber();
		c1.operation(5,3);
		c1.operation(5.5,5);
		

	}

}
