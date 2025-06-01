package p1;

class School{
	
	int student;
	int teacher;
	String name;
	String location;
	String division;
	
	School() {
		super();
		this.student = 1000;
		this.teacher =100;
		this.name = "Samarth College of Computer Science";
		this.location ="Pune";
		this.division ="A";
	}
	
	School(int student, int teacher, String name, String location, String division) {
		
		this.student = student;
		this.teacher = teacher;
		this.name = name;
		this.location = location;
		this.division = division;
	}

	int getStudent() {
		return student;
	}

	void setStudent(int student) {
		this.student = student;
	}

	int getTeacher() {
		return teacher;
	}

	void setTeacher(int teacher) {
		this.teacher = teacher;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	String getLocation() {
		return location;
	}

	void setLocation(String location) {
		this.location = location;
	}

	String getDivision() {
		return division;
	}

	void setDivision(String division) {
		this.division = division;
	}

	void display()
	{
		
		System.out.println("The student is:"+student);
		System.out.println("the teacher is:"+teacher);
		System.out.println("The name is:"+name);
		System.out.println("The location is:"+location);
		System.out.println("The division is:"+division);
	}
}//class School end here

class PrimarySchool extends School//step 1(is-a)
{
	int Nochild;

	PrimarySchool() {
		
		super();//step2//call default constructor of superclass
		this.Nochild=30;
	
	}

	PrimarySchool(int student, int teacher, String name, String location, String division,int no) {
		
		super(student, teacher, name, location, division);//step3//call parameterized constructor of super class
		
		
		this.division=division;
		this.Nochild=no;
	
	}

	int getNochild() {
		return Nochild;
	}

	void setNochild(int nochild) {
		Nochild = nochild;
	}
	
	void display()
	{
		super.display();
		System.out.println("The number of child is:"+Nochild);
	}
	
	}//class PrimarySchool end here



class SchoolInheritance {

	public static void main(String[] args) {
		
		
	    School s1;
	    s1=new PrimarySchool(12,23,"samarth college","Pune","c",100);
	    s1.display();
	    
	    
	    
	   
		/*PrimarySchool s1=new PrimarySchool();
		//s1.display();
		s1.student=100;
		s1.teacher=50;
		s1.name="JSPM";
		s1.location="Pune";
		s1.division="B";
		s1.display();
		*/

	}

}
