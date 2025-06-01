package p1;

class Employee2{
	
	int id;
	String name;
	double salary;
	
	//default constructor
	Employee2()
	{   
		this.id=123;
		this.name="Usha";
		this.salary=34.67;
	}
	
	//parameterized constructor
	public Employee2(int i,String nm,double sal)
	{
		
		this.id=i;
		this.name=nm;
		this.salary=sal;
		
	}
	
	int getId() {
		return id;
	}
	void setId(int id) {
		this.id = id;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	double getSalary() {
		return salary;
	}
	void setSalary(double salary) {
		this.salary = salary;
	}
	
	void display()
	{
		
		System.out.printf("\nThe employee id,name and salary is:%d %s %f",this.id,this.name,this.salary);
	}
	
	
}//class employee2 end here

public class Test8 {

	public static void main(String[] args) {
		
		Employee2 e2=new Employee2();
		e2.display();
		
		Employee2 e3=new Employee2(567,"Jayesh",40.4);
		e3.display();
		//e3.display();
		//e2.setId(234);
		//e2.setName("Ankita");
		//e2.setSalary(15.4);
		//e2.display();
		
		System.out.println("\nThe id of the employee is"+e2.getId());
		System.out.println("The name of the employee is"+e2.getName());
		System.out.println("The salary of the employee is"+e2.getSalary());
		
		

	}

}
