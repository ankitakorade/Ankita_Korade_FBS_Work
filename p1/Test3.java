package p1;

class Distance{
	
	int feet;
	int inch;
	
	//default constructor
	Distance()
	{
		
		this.feet=56;
		this.inch=12;
		
	}
	
	//parameterized constructor
	public Distance(int f,int i)
	{
		
		this.feet=f;
		this.inch=i;
	}
	
	
	
	void setFeet(int feet) {
		this.feet = feet;
	}



	void setInch(int inch) {
		this.inch = inch;
	}
	



	int getFeet() {
		return feet;
	}



	int getInch() {
		return inch;
	}



	void display()
	{
		
		System.out.printf("\n The distance is: %d %d",this.feet,this.inch);
	}
}//class distance end here


public class Test3 {

	public static void main(String[] args) {
		
		 Distance dt=new Distance();
		   dt.display();
		    
		  Distance dt2=new Distance(34,56);
		  dt2.display();
		    
		    
		   // dt.setFeet(35);
		    //dt.setInch(23);
		   // dt.display();
		    
		    System.out.println("\nThe value of feet is"+dt.getFeet());
		    System.out.println("The value of inch is"+dt.getInch());
		    
		    

	}

}
