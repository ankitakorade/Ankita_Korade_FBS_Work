package c1;

import java.util.*;

class StudentsCollections {
	int rollno;
	String name;

	StudentsCollections() {
		this.rollno = 12;
		this.name = "Ankita";
	}

	StudentsCollections(int rollNo, String name) {
		this.rollno = rollNo;
		this.name = name;
	}

	int getRollno() {
		return rollno;
	}

	void setRollno(int rollno) {
		this.rollno = rollno;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	@Override
	public String toString() {
		return "StudentsCollections [rollno=" + rollno + ", name=" + name + "]";
	}
}

public class StudentCollection {
	public static void main(String[] args) {

		LinkedList s1 = new LinkedList();

		
		s1.add(new StudentsCollections(12, "Ankita"));
		s1.add(new StudentsCollections(13, "Radha"));
		s1.add(new StudentsCollections(14, "Rutuja"));
		s1.add(new StudentsCollections(15, "Sakshi"));

		
		for (int i = 0; i < s1.size(); i++) {
			System.out.println(s1.get(i));
		}

		
	}
}
