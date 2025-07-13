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

public class StackQue {

	public static void main(String[] args)
	{

		Stack<Student> stack = new Stack<>();

		stack.push(new Student(1, "Ankita"));
		stack.push(new Student(2, "Rahul"));
		stack.push(new Student(3, "Priya"));

	
		while (!stack.isEmpty()) {
			
			Student s = stack.pop();
			System.out.println("Popped from Stack: " + s);
		}


	
		Queue<Student> queue = new LinkedList<>();


		queue.add(new Student(4, "Rohit"));
		queue.add(new Student(5, "Sneha"));
		queue.add(new Student(6, "Amit"));

		while (!queue.isEmpty())
		{
			
			Student s = queue.poll();
			System.out.println("Removed from Queue: " + s);
		}
	}
}
