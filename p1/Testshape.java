package p1;

class Shape{
	
	void area(double b,double h)
	{
		
		double TriangleArea=b*h;
		System.out.println("The area of rectangle is:"+TriangleArea);
		
	}
	
	void area(int l,int b)
	{
		int RectangleArea=l*b;
		System.out.println("The area of rectangle is:"+RectangleArea);
	}
	
	void area(double PI,int r1)
	{
		
		double CircleArea=PI*r1*r1;
		System.out.println("The area of circle is:"+CircleArea);
		
		
	}
}//class Shape end here

public class Testshape {

	public static void main(String[] args) {
		
		Shape s1=new Shape();
		s1.area(34.4,2.3);
		s1.area(34,56);
		double PI=3.14;
		int r1=14;
		s1.area(PI,r1);

	}

}
