package p1;

class Employes
{
	int id;
	String name;
	double salary;
	
 double calculate_salary()
 {
	 return salary;
	 
 }
 
	
	

Employes()
	{
		
		this.id=101;
		this.name="Ankita";
		this.salary=23.3;
	}
	
	Employes(int id, String nam, double sal) {
		
		this.id = id;
		this.name = nam;
		this.salary = sal;
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
		
		System.out.println("The id of employee is:"+id);
		System.out.println("The name of the employee is:"+name);
		System.out.println("The salary of the employee is:"+salary);
	}
	
}//class Employes end here


class SalesManage extends Employes//step 1
{
	double incentive;
	int target;
	
	double calculate_salary()
	{
		double Total=salary+incentive;
		return Total;
		
	}
	
double calculate_salary(double sal,double incentive)
{
	salary=incentive+sal;
	return salary;
}
	
	
	SalesManage() {
		
		super();//step2//call the default constructor of super class
		this.incentive=45.6;
		this.target=50;
		
	}
	SalesManage( int id,String name, double sal,double incentive,int target) {
		
		
		super(id, name, sal);//step3//call the parameterized constructor of default constructor
		this.incentive=incentive;
		this.target=target;
	
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
		System.out.println("The target is:"+target);
	}

}//class SalesManage end here

class HeadR extends Employes
{
	double comission;
	
	
	
	
	
	double calculate_salary()
	{
		double Totalsal=salary+comission;
		return Totalsal;
		
	}

	HeadR() {
		
		super();
		this.comission=45.5;
	

	}

	HeadR(int id, String nam, double sal,double comission) {
		
		super(id, nam, sal);
		this.comission=comission;
	
	}

	double getComission() {
		return comission;
	}

	void setComission(double comission) {
		this.comission = comission;
	}
	
	void display()
	{
		super.display();
		System.out.println("The comission of the Hr is:"+comission);
		
	}

}//class Hr end here


class EmployeeInheritance {

	public static void main3(String[] args) {
	
		//SalesManage s1=new SalesManage();
		//s1.display();
		//s1.id=102;
		//s1.name="Sonali";
		//s1.salary=34.4;
		//s1.incentive=45.3;
		//s1.target=22;
		//s1.display();
		
		Employes e1;
		e1=new SalesManage(102,"Lata",56.6,7.8,76);
		e1.display();
		
		e1=new HeadR(456,"Lata",67.7,34.5);
		e1.display();
		
		e1.calculate_salary();
		e1.calculate_salary();
		e1.calculate_salary();
		
		
	}


	   
public static void main1(String[] args)
	{
		Employes[] arrEmp;//reference of array
		arrEmp=new Employes[3];//array of reference
		arrEmp[0]=new Employes(101,"Sachin",20.7);
		arrEmp[1]=new Employes(102,"Virat",300);
		arrEmp[2]=new Employes(103,"Rohit",50000);
		
		for(int i=0;i< arrEmp.length;i++)
		{
			
			arrEmp[i].display();
			System.out.println();
		}
		
	
	}
	
	public static void main2(String[] args)
	{
		int[] arr= {10,20,30,40,50};
		
		for(int i=0; i<arr.length; i++)
		{
			System.out.println(arr[i]);
			
		}	
	}


	}
