package c1;

import java.util.*;

class StudenCompare{
	
	int roll;
	String name;
	double marks;
	
	StudenCompare(int roll, String name, double marks) {
		
		this.roll = roll;
		this.name = name;
		this.marks = marks;
	}

	@Override
	public String toString() {
		return "StudenCompare [roll=" + roll + ", name=" + name + ", marks=" + marks + "]";
	}
	
	
	
}
public class StudentCompare {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		List<StudenCompare> l1=new ArrayList<StudenCompare>();
		l1.add(new StudenCompare(10,"Sachin",98));
		l1.add(new StudenCompare(7,"Dhoni",35));
		l1.add(new StudenCompare(45,"Rohit",77));
		l1.add(new StudenCompare(18,"Virat",95));
		
		System.out.println("Before sort");
		
		for(StudenCompare s1:l1)
		{
			System.out.println(s1);
		

	}
		
		Collections.sort(l1,new MarksComprator());
		
		
		System.out.println("After sorting on marks");
		
		for(StudenCompare s1: l1) 
		{
			System.out.println(s1);
			
			
			
}
		Collections.sort(l1,new RollComprator());

}
}
