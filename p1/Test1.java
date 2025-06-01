package p1;
class Date{
	
	int day;
	int month;
	int year;
	
	Date()//default constructor
	{
		this.day=20;
		this.month=3;
		this.year=2020;
		
	}
	
	public Date(int d,int m,int y)//parameterized constructor
	{
		
		this.day=d;
		this.month=m;
		this.year=y;
	}
	
	void setDay(int day)
      {
		this.day = day;
	}

	void setMonth(int month) {
		
		this.month = month;
	}

	void setYear(int year) {
		this.year = year;
	}
	

	int getDay() {
		return day;
	}

	int getMonth() {
		return month;
	}

	int getYear() {
		return year;
	}

	void display()//Display function
	{
		
		System.out.printf("\nThe date is:%d /%d %d",this.day,this.month,this.year);
	
	}
}//class date end here


public class Test1 {

	public static void main(String[] args) {
		Date d1=new Date();
		d1.display();
	
		
		Date d2=new Date(12,4,2025);
		d2.display();
		
		
		//d1.setDay(24);
		//d1.setMonth(4);
		//d1.setYear(2025);
		//d1.display();
		
		//System.out.println("\nThe day is"+d1.getDay());
		//System.out.println("The month is"+d1.getMonth());
		//System.out.println("The year is"+d1.getYear());
		

	}

}
