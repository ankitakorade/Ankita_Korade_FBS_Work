package c1;
import java.util.*;

class Student{
	
	int roll;
	String name;
	
	Student(int roll, String name) {
		super();
		this.roll = roll;
		this.name = name;
	}

	@Override
	public String toString() {
		return "Student [roll=" + roll + ", name=" + name + "]";
	}

	@Override
	public int hashCode() {
		// TODO Auto-generated method stub
		return this.roll;
	}

	@Override
	public boolean equals(Object obj) {
		// TODO Auto-generated method stub
		System.out.println("In equals");
		Student s1=(Student)obj;
		
		if(this.roll==s1.roll)
		{
			
			return true;
		}
		else {
			
			return false;
		}
	}
	
	public int compareTo(Object obj)
	{
		
		Student s2=(Student)obj;
		return this.roll-s2.roll;
	}
	
	
}

public class HashsetCollection {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		HashSet<Student> sthashset=new HashSet<Student>();
		System.out.println("Hashset");
		sthashset.add(new Student(12,"Ankita"));
		sthashset.add(new Student(13,"Rutuja"));
		sthashset.add(new Student(14,"Sakshi"));
		
		for(Student s1:sthashset) {
			
			System.out.println(s1);
		}

	}

}
