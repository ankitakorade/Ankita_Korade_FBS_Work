package c1;

public class Employe {
	
	int id;
	double salary;
	String name;
	Employe left;
	Employe right;
	
	
	Employe(int rollno, double salary, String name) {
		
		this.id = rollno;
		this.salary = salary;
		this.name = name;
		this.left = null;
		this.right = null;
	}


	int getRollno() {
		return id;
	}


	void setRollno(int rollno) {
		this.id = rollno;
	}


	double getSalary() {
		return salary;
	}


	void setSalary(double salary) {
		this.salary = salary;
	}


	String getName() {
		return name;
	}


	void setName(String name) {
		this.name = name;
	}


	Employe getLeft() {
		return left;
	}


	void setLeft(Employe left) {
		this.left = left;
	}


	Employe getRight() {
		return right;
	}


	void setRight(Employe right) {
		this.right = right;
	}
	
	
}

public class BinaryTrees {
	
	Employe root;
	
	public BinaryTrees(){
		
		root=null;
	}
	
	



public void insert(int ro)
