package c1;

import java.util.*;
import java.util.Scanner;

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

public class MenuDriven {

	public static void main(String[] args) {
		List<Student> a1 = new ArrayList<Student>();
		Scanner sc = new Scanner(System.in);
		int choice;

		do {
			System.out.println("\n=== Student Menu ===");
			System.out.println("1. Add Student");
			System.out.println("2. Display All");
			System.out.println("3. Sort by Roll No");
			System.out.println("4. Exit");
			System.out.print("Enter your choice: ");
			choice = sc.nextInt();

			switch (choice) {
			case 1: {
				System.out.print("Enter roll number: ");
				int roll = sc.nextInt();
				System.out.print("Enter name: ");
				String name = sc.next();

				System.out.print("Enter marks: ");
				double marks = sc.nextDouble();

				Student s = new Student(roll, name);
				a1.add(s);

				System.out.println("Student added successfully.");
				break;
			}

			case 2: {
				System.out.println("Displaying all students:");
				for (Student s : a1) {
					System.out.println(s);
				}
				break;
			}

			case 3: {
				if (a1.isEmpty()) {
					
					System.out.println("No students to sort.");
				} else 
				{
					Collections.sort(a1, new Comparator<Student>() 
					{
						public int compare(Student s1, Student s2) 
						{
							return Integer.compare(s1.rollNo, s2.rollNo);
						}
					});
					System.out.println("Students sorted by roll number.");
				}
				break;
			}

			case 4: {
				System.out.println("Exiting program.");
				break;
			}

			default: {
				System.out.println("Invalid choice. Try again.");
			}
			}
		} while (choice != 4); 

		sc.close();
	}
}
