package p1;
class Date1{
	
	int day,month,year;
	
	void display()//Display function
	{
		
		System.out.printf("The date is:%d /%d %d",this.day,this.month,this.year);
	
	}
}//class date end here




class Time1{
	
	int hour,min,sec;
	
	void display()
	{
		
		System.out.printf("\n The time is:%d %d %d",this.hour,this.min,this.sec);
	}
}//class Time end here



class Distance1{
	
	int feet;
	int inch;
	
	void display()
	{
		
		System.out.printf("\n The distance is: %d %d",this.feet,this.inch);
	}
}//class distance end here



class Complex1{
	
	double real,imaginary;
	
	void display()
	{
		
		System.out.printf("\nThe complex number is:%f %f",this.real,this.imaginary);
	}
}//class display end here



class Rectangle1{
	
	double length,width;
	
	void display()
	{
		
		System.out.printf("\nThe rectangle length and breadth is: %f %f",this.length,this.width);
	}
	
}//class Rectangle end here



class Employee1{
	
	int empID,age,yearsOffExperience;
	
	void display()
	{
		
		System.out.printf("\nThe Employee information is:%d %d %d",this.empID,this.age,this.yearsOffExperience);
	}
}//class Employee end here




//Main class start here
public class Test {

	public static void main(String[] args)
	 {
		
		
		Date1 d1=new Date1();
		d1.day=24;
		d1.month=4;
		d1.year=2025;
		d1.display();
		
		//System.out.printf("%d /%d /%d",d1.day,d1.month,d1.year);
		
	
		Date1 d2=new Date1();
		d2.day=22;
		d2.month=5;
		d2.year=2002;
		
		System.out.printf("\n%d /%d %d",d2.day,d2.month,d2.year);
		
	    Time1 t1=new Time1();
	    t1.hour=24;
	    t1.min=5;
	    t1.sec=67;
	    t1.display();
	    
	   
	    Distance1 dt=new Distance1();
	    dt.feet=35;
	    dt.inch=34;
	    dt.display();
	    
	    
	    Complex1 c1=new Complex1();
	    c1.real= -3.2;
	    c1.imaginary= -5.6;
	    c1.display();
	    
	   
	    Rectangle1 r1=new Rectangle1();
	    r1.length=3.14;
	    r1.width=4.500;
	    r1.display();
	    
	    
	    Employee1 e1=new Employee1();
	    e1.empID=123;
	    e1.age=23;
	    e1.yearsOffExperience=4;
	    e1.display();
	    
	    
		}

}//Main class end here
