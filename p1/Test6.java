package p1;

class Employee{
	
	int empID;
	int age;
	int yearsOffExperience;
	
	//default constructor
	Employee ()
	{
		this.empID=232;
		this.age=23;
		this.yearsOffExperience=4;
		
	}
	
	//parameterized constructor
	public Employee(int eid,int ag,int d)
	{
		
		this.empID=eid;
		this.age=ag;
		this.yearsOffExperience=d;
	}
	
	
	
	void setEmpID(int empID) {
	   this.empID=empID;
	}
	



	void setAge(int age) {
		this.age = age;
	}



	void setYearsOffExperience(int yearsOffExperience) {
		this.yearsOffExperience = yearsOffExperience;
	}
     


	int getEmpID() {
		return empID;
	}



	int getAge() {
		return age;
	}



	int getYearsOffExperience() {
		return yearsOffExperience;
	}



	void display()
	{
		
		System.out.printf("\nThe Employee information is:%d %d %d",this.empID,this.age,this.yearsOffExperience);
	}
}//class Employee end here




class Test6 {

	public static void main(String[] args) {
		Employee e1=new Employee();
		e1.display();
		
		
		Employee e2=new Employee(34,634,6);
		e2.display();
		
	    //e1.setEmpID(123);
	    //e1.setAge(23);
	    //e1.setYearsOffExperience(4);
	    //e1.display();
	    
	    System.out.println("\nThe empID is"+e1.getEmpID());
	    System.out.println("The employee age is"+e1.getAge());
	    System.out.println("The employee year of experience is"+e1.getYearsOffExperience());
	    
	    
		
		}

}
