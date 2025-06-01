package p1;

class Studentinheritance
{
	int fbid;
	String name;
	int distance;
	
  Studentinheritance()
	{
	  System.out.println("The default constructor called of student");
	  this.fbid=101;
	  this.name="Ankita";
	  this.distance=50;
		
	}
	
	Studentinheritance(int fbid, String name, int distance) {
		
		this.fbid = fbid;
		this.name = name;
		this.distance = distance;
	}//para constructor end here

	int getFbid() {
		return fbid;
	}

	void setFbid(int fbid) {
		this.fbid = fbid;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	int getDistance() {
		return distance;
	}

	void setDistance(int distance) {
		this.distance = distance;
	}
	
	void display()
	{
		System.out.println("The id is:"+fbid);
		System.out.println("The name is:"+name);
		System.out.println("The distance is:"+distance);
	}
	
}//class Studentinheritance end here

class Placedstudents extends Studentinheritance//step is-a

{
	 
	
    String company;
    String desg;
    
    Placedstudents()
    {    
    	super();//step2//calling super class default constructor
    	//super()line must be first line in constructor
    	//System.out.println("The default constructor called of derived class");
    	this.company="TCS";
    	this.desg="Manager";
    	
    }
    
	Placedstudents(int fbid,String name,int distance,String cname, String d) {
		
		super(fbid,name,distance);//calling super class para constructor
		this.company =cname;
		this.desg = d;
	}//para constructor end here

	String getCompany() {
		return company;
	}

	void setCompany(String company) {
		this.company = company;
	}

	String getDesg() {
		return desg;
	}

	void setDesg(String desg) {
		this.desg = desg;
	}
	
	
	void display()
	{
		super.display();
		System.out.println("The company is"+company);
		System.out.println("The designation is:"+desg);
	}
    
}//class Placedstudent end here

class TestInheritanc {

	public static void main(String[] args) {
		
	Placedstudents ps1=new Placedstudents();
	  ps1.fbid=102;
	  ps1.name="Sonali";
	  ps1.distance=500;
	  ps1.company="TCS";
	  ps1.desg="Manager";
	  ps1.display();
	

	}

}
