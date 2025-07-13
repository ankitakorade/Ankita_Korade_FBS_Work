package c1;

	
	class Node {
	    Employee data;
	    Node next;

	    public Node(Employee data) {
	        this.data = data;
	        this.next = null;
	    }
	}

	public class EmployeeLinkedList {
	    Node head;

	    // Insert employee at the end
	    public void insertAtEnd(Employee emp) {
	        Node newNode = new Node(emp);
	        if (head == null) {
	            head = newNode;
	            return;
	        }
	        Node temp = head;
	        while (temp.next != null)
	            temp = temp.next;
	        temp.next = newNode;
	    }

	    // Display all employees
	    public void display() {
	        Node temp = head;
	        System.out.println("Employee List:");
	        while (temp != null) {
	            System.out.println(temp.data);
	            temp = temp.next;
	        }
	    }

	    // Sort employees by ID using Bubble Sort
	    public void sortById() {
	        if (head == null || head.next == null) return;

	        Node current, index;
	        Employee tempData;

	        for (current = head; current.next != null; current = current.next) {
	            for (index = current.next; index != null; index = index.next) {
	                if (current.data.id > index.data.id) {
	               
	                    tempData = current.data;
	                    current.data = index.data;
	                    index.data = tempData;
	                }
	            }
	        }
	        System.out.println("Sorted by Employee ID.");
	    }

	 
	    public void sortByName() {
	        if (head == null || head.next == null) return;

	        Node current, index;
	        Employee tempData;

	        for (current = head; current.next != null; current = current.next) {
	            for (index = current.next; index != null; index = index.next) {
	                if (current.data.name.compareToIgnoreCase(index.data.name) > 0) {
	                    tempData = current.data;
	                    current.data = index.data;
	                    index.data = tempData;
	                }
	            }
	        }
	        System.out.println("Sorted by Employee Name.");
	    }

	    public void sortBySalary() {
	        if (head == null || head.next == null) return;

	        Node current, index;
	        Employee tempData;

	        for (current = head; current.next != null; current = current.next) {
	            for (index = current.next; index != null; index = index.next) {
	                if (current.data.salary > index.data.salary) {
	                    tempData = current.data;
	                    current.data = index.data;
	                    index.data = tempData;
	                }
	            }
	        }
	        System.out.println("Sorted by Salary.");
	    }
	}


	

}
