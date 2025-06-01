package p1;

class Student1
{
  int fbid;
  String name;
  int distance;


Student1()
{
	
    System.out.println("Student default constructor called");
    this.fbid=101;
    this.name="not given";
    this.distance=50;
    
    }
	
 Student1(int fbid,String name,int distance)
	{
	
		this.fbid=fbid;
		this.name=name;
		this.distance=distance;
		
	}
	
  


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
	
    System.out.println("Id is:"+fbid);
    System.out.println("Name is:"+name);
    System.out.println("Distance is:"+distance+"Km");

}
}//class student end here

class Placedstudent extends Student1//step1
{
	String company;
	String desg;
	
	Placedstudent()
	{
		
		
		super();//step2
		this.company="not assigned";
		this.desg="xyz";
	}
	
	Placedstudent(int fbid,String name,int distance,String cnm,String desg)
	{
		
		super(fbid,name,distance);//step3
		this.company=cnm;
		this.desg=desg;
	}

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
  System.out.println("The company name is:"+company);
  System.out.println("The designation of the placed student is:"+desg);

}
	
}//class placedstudent end here


class TestInheritance {

	public static void main(String[] args) {
		
		Placedstudent p1=new Placedstudent();
		p1.fbid=101;
		p1.name="Ankita";
		p1.distance=15;
		p1.company="TCS";
		p1.desg="HR";
		p1.display();

	}

}
