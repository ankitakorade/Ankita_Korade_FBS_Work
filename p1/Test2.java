package p1;
class Time{
	
	int hour;
	int minute;
	int seconde;
	
	Time()//default constructor
	{
		
		this.hour=24;
		this.minute=12;
		this.seconde=4;
	}
	
	//parameterized constructor
	public Time(int hr,int min,int sec)
	{
		
		this.hour=hr;
		this.minute=min;
		this.seconde=sec;
	}
	
	
	
	void setHour(int hour) {
		this.hour = hour;
	}



	void setMinute(int minute) {
		this.minute = minute;
	}



	void setSeconde(int seconde) {
		this.seconde = seconde;
	}
	



	int getHour() {
		return hour;
	}



	int getMinute() {
		return minute;
	}



	int getSeconde() {
		return seconde;
	}



	void display()
	{
		
		System.out.printf("\n The time is:%d %d %d",this.hour,this.minute,this.seconde);
	}
}//class Time end here

public class Test2 {

	public static void main(String[] args) {
		Time t1=new Time();
		t1.display();
		
		Time t2=new Time(23,5,6);
		t2.display();
		
	   // t1.setHour(24);
	    //t1.setMinute(12);
	   // t1.setSeconde(34);
	    //t1.display();
	    
	    System.out.println("\nThe value of hour is"+t1.getHour());
	    System.out.println("The value of minute is"+t1.getMinute());
	    System.out.println("The value of seconde is"+t1.getSeconde());

	}

}
