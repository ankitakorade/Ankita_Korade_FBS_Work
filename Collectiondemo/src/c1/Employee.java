package c1;

import java.util.ArrayList;
import java.util.TreeSet;

 public class Employe implements Comparable {
	int id;
	String name;
	double salary;

	Employe(int id, String name, double salary) {

		this.id = id;
		this.name = name;
		this.salary = salary;
	}

	@Override
	public String toString() {
		return "Employe [id=" + id + ", name=" + name + ", salary=" + salary;
	}

	public boolean equals(Object obj) {

		Employe e1 = (Employe) obj;

		if (this.id == e1.id) {

			return true;
		} else {

			return false;
		}

	}

	public int compareTO(Object obj) {
		Employe e1 = (Employe) obj;
		return this.id - e1.id;

	}

	@Override
	public int compareTo(Object o) {
		// TODO Auto-generated method stub
		return 0;
	}
}

public class Employee {

	public static void main1(String[] args) {

		ArrayList<Employe> e1 = new ArrayList<Employe>();
		e1.add(new Employe(12, "Ankita", 78));
		e1.add(new Employe(13, "Sonali", 14));

		if (e1.contains(new Employe(11, "Diksha", 68))) {
			System.out.println("The employee is found");

		} else {

			System.out.println("The employe is not found");
		}

	}

	public static void main2(String[] args) {

		TreeSet<Employe> e1 = new TreeSet<Employe>();
		e1.add(new Employe(4, "sakshi", 9.8));
		e1.add(new Employe(7, "raddha", 45.5));
		e1.add(new Employe(9, "Ankita", 89));

		if (e1.contains(new Employe(4, "sakshi", 9.8))) {

			System.out.println("The employee is found");
		} else {

			System.out.println("The employee is not found");
		}
	}

}
