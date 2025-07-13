package c1;

public class EmployeeList {

	
	class Employee {
	    int id;
	    String name;
	    double salary;

	    public Employee(int id, String name, double salary) {
	        this.id = id;
	        this.name = name;
	        this.salary = salary;
	    }

	    public String toString() {
	        return "[" + id + ", " + name + ", ₹" + salary + "]";
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
	
	

}
