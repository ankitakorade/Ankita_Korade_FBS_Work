package c1;

import java.util.ArrayList;
import java.util.TreeSet;


public class Student implements Comparable {
	int roll;
	String name;

	public Student(int i, String nm) {
		this.roll = i;
		this.name = nm;
	}

	@Override
	public boolean equals(Object obj) {
		System.out.println("In equals");
		Student s1 = (Student) obj;
		if (s1.roll == this.roll) {
			return true;

		} else {
			return false;
		}
	}

	@Override
	public String toString() {
		return "Student [roll=" + roll + ", name=" + name + "]";
	}

	@Override
	public int compareTo(Object o) {
		// TODO Auto-generated method stub
		System.out.println("Inside Compare To");
		Student s2 = (Student) o;// downcast
		return this.roll - s2.roll;
	}

}// class student ends here

class Demo {
	public static void main1(String[] args) {

		TreeSet<Student> studentlist = new TreeSet<Student>();
		studentlist.add(new Student(10, "Sachin"));
		studentlist.add(new Student(18, "Virat"));
		studentlist.add(new Student(7, "Ronaldo"));
		studentlist.add(new Student(45, "Rohit"));

		/*
		 * for (Student s1 : studentlist) { System.out.println(s1); }
		 */

		if (studentlist.contains(new Student(18, "Virat"))) {
			System.out.println("Found");
		} else {
			System.out.println("Not found");
		}
	}

	public static void main(String[] args) {
		ArrayList<Student> studentlist = new ArrayList<Student>();
		studentlist.add(new Student(10, "Sachin"));
		studentlist.add(new Student(18, "Virat"));
		studentlist.add(new Student(7, "Ronaldo"));
		studentlist.add(new Student(45, "Rohit"));

		for (Student s1 : studentlist) {
			System.out.println(s1);
		}

		if (studentlist.contains(new Student(18, "Virat"))) {
			System.out.println("Found");
		} else {
			System.out.println("Not found");
		}
	}

}