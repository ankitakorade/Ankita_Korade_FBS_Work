package p1;

class Student{
	
	int rollNO;
	int marks;
    String name;
    
    //default constructor
    Student()
    {
    	
    	this.rollNO=14;
    	this.marks=456;
    	this.name="Ankita";
    }
    
    //parameterized constructor
    public Student(int rno,int mark,String nm)
    {
    	
    	this.rollNO=rno;
    	this.marks=mark;
    	this.name=nm;
    }
	
	
	
	int getRollNO() {
		return rollNO;
	}
	void setRollNO(int rollNO) {
		this.rollNO = rollNO;
	}
	int getMarks() {
		return marks;
	}
	void setMarks(int marks) {
		this.marks = marks;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	
	void display()
	{
		
		System.out.printf("\nThe student information is:%d %d %s",this.rollNO,this.marks,this.name);
	}
	
	
}//class student end here

public class Test7 {

	public static void main(String[] args) {
		
		Student s1=new Student();
		s1.display();
		
		Student s2=new Student(24,67,"lata");
		s2.display();
		
		//s1.setRollNO(14);
		//s1.setMarks(100);
		//s1.setName("Nisha");
		//s1.display();
		
		System.out.println("\nThe roll-number of student is"+s1.getRollNO());
		System.out.println("The marks of student is"+s1.getMarks());
		System.out.println("The name of the student is"+s1.getName());

	}

}
