package p1;

class Hr{
	
	int id;
	String name;
	double salary;
	double comission;
	
	//default constructor
	Hr()
	{
		this.id=123;
		this.name="Akshada";
		this.salary=78.5;
		this.comission=34.4;
		
	}
	
	//parameterized constructor
	public Hr(int i,String nm,double sal,double comis)
	{
		this.id=i;
		this.name=nm;
		this.salary=sal;
		this.comission=comis;
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
	double getComission() {
		return comission;
	}
	void setComission(double comission) {
		this.comission = comission;
	}
	
	void display()
	{
		
		System.out.printf("\nThe hr id name salary and comission is %d %s %f %f",this.id,this.name,this.salary,this.comission);
	}
	
	
}//class Hr end here


public class Test10 {

	public static void main(String[] args) {
	
		Hr h1=new Hr();
		h1.display();
		
		Hr h2=new Hr(234,"Radha",89.9,23.3);
		 h2.display();
		 
		//h1.setId(234);
		//h1.setName("Ankita");
		//h1.setSalary(34.56);
		//h1.setComission(67.8);
		//h1.display();
		
		//System.out.println("\nThe id of Hr is"+h1.getId());
		//System.out.println("The name of the Hr is"+h1.getName());
		//System.out.println("The salary of the Hr is"+h1.getSalary());
		//System.out.println("The comission of the Hr is"+h1.getComission());

	}

}
