package a1;

public class Student{
	
	int id;
	String name;
	double salary;
	Student next;
	
	public Student() {
		// TODO Auto-generated constructor stub
	}

	Student(int id, String name, double salary) {
		super();
		this.id = id;
		this.name = name;
		this.salary = salary;
	}

	int getId() {
		return id;
	}

	void setId(int id) {
		this.id = id;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	double getSalary() {
		return salary;
	}

	void setSalary(double salary) {
		this.salary = salary;
	}
	
	
	
	
}