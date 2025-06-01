package p2;


abstract class Employes
{
	 int id;
	 String name;
	 double salary;
	
 abstract void calculateSalary();
 
/* {
	 return salary;
 } */
	 
 
	 
	 
Employes()
	{
		
		this.id=101;
		this.name="Ankita";
		this.salary=23.3;
	}
	
	Employes(int id, String name, double salary) {
		
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
		
		System.out.println("The id of employee is:"+id);
		System.out.println("The name of the employee is:"+name);
		System.out.println("The salary of the employee is:"+salary);
	}


	@Override
	public String toString() {
		return "\nid of the employee is:" + id + ", \nname of the employee is :"
	            + name + ", \nsalary of the employee is:" + salary;
	}
	
	
}//class Employes end here


class SalesManage extends Employes//step 1
{
	double incentive;
	int target;
	
// double calculate_salary();
	/*{
		double Total=salary+incentive;
		return Total;
		
	}*/
	
 void calculateSalary()
{
	double Total= incentive+salary;
	System.out.println("Te salary of the salesmanager is:"+Total);

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
		System.out.println("The incentive of slaesmanager is:"+incentive);
		System.out.println("The target of salesmanager is:"+target);
	}

	@Override
	public String toString() {
		return super.toString() + "\nSalesManage incentive is:" + incentive + ", \ntarget of the SalesManage is:" + target ;
	}

	
}//class SalesManage end here

class HeadR extends Employes
{
	double comission;
	
	
	
	
	
void calculateSalary()
	{
		double sal= salary+comission;
		System.out.println("The salary of the Hr is:"+sal);
	
		
	}

	HeadR() {
		
		super();
		this.comission=45.5;
	

	}

	HeadR(int id, String name, double salary,double comission) {
		
		super(id, name, salary);
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
		//super.display();
		System.out.println("The comission of the Hr is:"+comission);
		
	}

	@Override
	public String toString() {
		return super.toString()+"\nHeadR comission is=" + comission ;
	}
	

}//class Hr end here


/*class EmployeeInheritance {

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
*/

class Employee {

	public static void main(String[] args) {
		
		Employes e1;
		e1=new SalesManage(101,"usha",89.9,5.6,6);
		e1.display();
		e1.calculateSalary();
		
		System.out.println();
		
		Employes e2;
		e2=new HeadR(102,"Sakshi",56.6,89.9);
		e2.display();
		e2.calculateSalary();

		
		//SalesManage s1=new SalesManage();
		//System.out.println(s1);
		
		//HeadR h1=new HeadR(101,"ankita",7.8,78.9);
		//System.out.println(h1);

	}

}
