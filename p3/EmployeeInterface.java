package p3;

class Employee implements Student
{
   int empId;
   String name;
   double salary;
   
   
   public Employee() {
	   
    
      
}

 public  Employee(int emId,String name,double salary)
   {    
	   super();
	   this.empId=emId;
	   this.name=name;
	   this.salary=salary;
	   
	   
   }

int getEmpId() {
	return empId;
}

void setEmpId(int empId) {
	this.empId = empId;
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

@Override
public String toString() {
	return "Employee [empId=" + empId + ", name=" + name + ", salary=" + salary + "]";
}
  
public void work()
{
	
    System.out.println(this.name+" is working!!!");
}

@Override
public void study() {
	
	System.out.println(this.name+" is studying!!!");
	
}
 

}



class EmployeeInterface {

	public static void main(String[] args) {
		
		Employee e1=new Employee();
		e1.work();
		e1.study();
		
		Student s1=new Employee(12,"Ankita",67.7);
		s1.study();
		
		
		

	}

}
