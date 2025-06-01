package p1;


class Admin{
	
	int id;
	String name;
	double salary;
	double allowance;
	
	
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
	double getAllowance() {
		return allowance;
	}
	void setAllowance(double allowance) {
		this.allowance = allowance;
	}
	
	void display()
	{
		
		System.out.printf("The admin information is:%d %s %f %f",this.id,this.name,this.salary,this.allowance);
	}
	
	
}//class admin end here

public class Test9 {

	public static void main(String[] args) {
		
		Admin a1=new Admin();
		a1.setId(123);
		a1.setName("Ved");
		a1.setSalary(45.5);
		a1.setAllowance(17.45);
		a1.display();
		
		System.out.println("\nThe id of the admin is"+a1.getId());
		System.out.println("The name of the admin is"+a1.getName());
		System.out.println("The salary of the admin is"+a1.getSalary());
		System.out.println("The allowance of the admin is"+a1.getAllowance());
		
	
}

}
