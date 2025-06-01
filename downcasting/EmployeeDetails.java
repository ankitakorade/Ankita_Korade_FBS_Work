package downcasting;

class Employee
{
   int id;
   String name;
   double salary;
   
   
   Employee()
   {
	   this.id=123;
	   this.name="Sakshi";
	   this.salary=45.5;
	   
   }
Employee(int id, String name, double salary) {
	super();
	this.id = id;
	this.name = name;
	this.salary = salary;
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
    System.out.println("The id of the employee is:"+id);
    System.out.println("The name of the employee is:"+name);
    System.out.println("The salary of the employee is:"+salary);

}
   
}//class employee end here

class SalesManager extends Employee
{
 
   int target;
   
   void incentive()
   {
	   System.out.println("The SalaesManager have a incentive");
	   
   }
SalesManager() 
{
	super();
	
}
SalesManager(int id, String name, double salary,int target) 
{
	super(id, name, salary);
	this.target=target;
	

}
   
void display()
{
   super.display();
   System.out.println("The target of the SalesManager is:"+target);
}

}//class SalesMnager end here

class Admin extends Employee
{
   void allowance()
   {
	   
	  System.out.println("The allowance of the Admin is"); 
   }
   
   
   Admin()
   {
	   super();
	   
   }

Admin(int id,String name,double salary) {
	super(id,name,salary);
	
}
   
  void display()
  {
	  
	  super.display();
	 
	  
  }

}//class Admin end here

public class EmployeeDetails {

	public static void main(String[] args) {
		
		
		Employee e1=new SalesManager();
	    
		//SalesManager m=(SalesManager)e1;
		//m.incentive();
	
		
		Employee e2=new Admin();
		//Admin a=(Admin)e2;
		//a.allowance();
	
		if(e1 instanceof SalesManager)
		{
			
			SalesManager m=(SalesManager)e1;
			((SalesManager) e1).incentive();
		}
		if(e2 instanceof Admin)
		{
			
			Admin a1=(Admin)e2;
			((Admin) e2).allowance();
		}

	}

}
