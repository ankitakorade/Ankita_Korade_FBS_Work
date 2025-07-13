package c1;
import java.util.*;



class Student {
 int rollNo;
 String name;

 Student(int rollNo, String name) {
     this.rollNo = rollNo;
     this.name = name;
 }

 public String toString() {
     return "Roll No: " + rollNo + ", Name: " + name;
 }
}


class NameComparator implements Comparator<Student>
{
	
 public int compare(Student s1, Student s2) 
 {
     return s1.name.compareTo(s2.name); 
 }
}

public class Compara {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	 List<Student> students = new ArrayList<>();
     students.add(new Student(3, "Zara"));
     students.add(new Student(1, "Ankita"));
     students.add(new Student(2, "Meena"));

    
     System.out.println("Before Sorting:");
     
     
     for (Student s : students)
     {
         System.out.println(s);
     }

  
     Collections.sort(students, new NameComparator());

    
     System.out.println("\nAfter Sorting by Name:");
     for (Student s : students) {
         System.out.println(s);
     }
 }
}



