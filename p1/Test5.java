package p1;

class Rectangle{
	
	double length;
	double width;
	
	//default constructor
	Rectangle()
	{
		this.length=34.5;
		this.width=5.6;
				
	}
	
	//parameterized constructor
	public Rectangle(double len,double wid)
	{
		
		this.length=len;
		this.width=wid;
		
	}
	
	
	
	void setLength(double length) {
		this.length = length;
	}



	void setWidth(double width) {
		this.width = width;
	}
     


	double getLength() {
		return length;
	}



	double getWidth() {
		return width;
	}



	void display()
	{
		
		System.out.printf("\nThe rectangle length and breadth is: %f %f",this.length,this.width);
	}
	
}//class Rectangle end here



class Test5 {

	public static void main(String[] args) {
		
		Rectangle r1=new Rectangle();
		r1.display();
		
		Rectangle r2=new Rectangle(45.6,7.8);
		r2.display();
	    //r1.setLength(3.14);
	    //r1.setWidth(4.500);
	    //r1.display();
	    
	    System.out.println("\nThe rectangle length is"+r1.getLength());
	    System.out.println("The rectangle width is"+r1.getWidth());
	    

	}

}
