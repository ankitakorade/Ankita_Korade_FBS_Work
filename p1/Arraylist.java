package p1;

class EmployeeArray
{
   int id;
   String name;
   double  salary;
   
   EmployeeArray()
   {
	   this.id=101;
	   this.name="Ankita";
	   this.salary=56.7;
	   
   }
   
EmployeeArray(int id, String name, double salary) {
	
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
   

}

class SaleMana extends EmployeeArray
{
   double incentive;
   int target;
   
   SaleMana()
   {     
	   super();
	   this.incentive=34.4;
	   this.target=45;
   }
   
SaleMana(int id,String name,double salary,double incentive, int target) {
	
	
	super(id,name,salary);
	this.incentive = incentive;
	this.target = target;
}

double getIncentive() {
	return incentive;
}

void setIncentive(double incentive) {
	this.incentive = incentive;
}

int getTarget() {
	return target;
}

void setTarget(int target) {
	this.target = target;
}
   
 void display()
 {
	 super.display();
	 System.out.println("The incentive is:"+incentive);
	 System.out.println("the target is:"+target);
	 
 }

}

class Headr extends EmployeeArray
{
     double allowance;
     
    

	Headr() {
		
		super();
		this.allowance=45.5;
	}

	Headr(int id, String name, double salary,double allowance) {
		
		super(id, name, salary);
		this.allowance=allowance;
		
	}

	double getAllowance() {
		return allowance;
	}

	void setAllowance(double allowance) {
		this.allowance = allowance;
	}
     
     void display()
     {
    	 
    	 super.display();
    	 System.out.println("The allowance of hr is:"+allowance);
    	 
     }
}


class Arraylist {

	public static void main(String[] args) {
		
	    EmployeeArray[] arrEmp;//reference of array
	    arrEmp=new EmployeeArray[4];//array of reference
		arrEmp[0]=new EmployeeArray(101,"Usha",23.3);
		arrEmp[1]=new EmployeeArray(102,"Radha",56.6);
		arrEmp[2]=new EmployeeArray(103,"lata",34.5);
		arrEmp[3]=new EmployeeArray(104,"Vrushali",34.4);
		
		for(int i=0;i<arrEmp.length;i++)
		{
	       arrEmp[i].display();
	       System.out.println();
			
		}
		

	}
	
	public static void main2(String[] args)
	{
		
		EmployeeArray arr[]=new EmployeeArray[3];
		arr[0]=new SaleMana(121,"Usha",34.4,89.9,67);
		arr[1]=new Headr(12,"Rutu",78.7,23.3);
		
		for(int i=0;i<arr.length;i++)
		{
			arr[i].display();
			System.out.println();
			
		}
		
		
	}
	
	public static void main3(String[] args)
	{
		
		int[] arr= {10,20,30,40,50,60};
		for(int i=0;i<arr.length;i++)
		{
			
			System.out.print("The element of arry is:"+arr[i]);
		}
	
			
			
}

}

