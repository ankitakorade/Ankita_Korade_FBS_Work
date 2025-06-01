package p1;

class SalesManager{
	
	int id;
	String name;
	double salary;
	double incentive;
	int target;
	
	
	//default constructor
	SalesManager()
	{
		this.id=567;
		this.name="Srushti";
		this.salary=56.4;
		this.incentive=23.3;
		this.target=34;
		
		
	}
	
	//parameterized constructor
	public SalesManager(int i,String nam,double sal,double incen,int tag)
	{
		
		this.id=i;
		this.name=nam;
		this.salary=sal;
		this.incentive=incen;
		this.target=tag;
		
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
		
		System.out.printf("\nThe salesmanager id name salary incentive and target is %d %s %f %f %d",this.id,this.name,this.salary,this.incentive,this.target);
	}
	
	
}//class salesManager end here


public class Test11 {

	public static void main(String[] args) {
		
		SalesManager m1=new SalesManager();
		m1.display();
		
		SalesManager m2=new SalesManager(67,"Meena",87.6,56.4,56);
		 m2.display();
		//m1.setId(456);
		//m1.setName("usha");
		//m1.setSalary(67.23);
		//m1.setIncentive(23.4);
		//m1.setTarget(56);
		//m1.display();
		
		//System.out.println("The id of the SalesManager is"+m1.getId());
		//System.out.println("The name of the SalesManager is"+m1.getName());
		//System.out.println("The salary of the SalesManager is"+m1.getSalary());
		//System.out.println("The incentive of the SalesManager is"+m1.getIncentive());
		//System.out.println("The target of the SalesManager is"+m1.getTarget());

	}

}
