package a1;

public class StudentList {
	
	Student head=null;


	public static void main(String[] args) {
		// TODO Auto-generated method stub

		  
		Student s1=new Student(12,"Ankita",45.5);
		Student s2=new Student(13,"Sonali",56.6);
		Student s3=new Student(14,"Radha",67.7);
		
		StudentList stud=new StudentList();
		stud.insert(s1);
		stud.insert(s2);
		stud.insert(s3);
		stud.iterate();
		
		  
	}

	
private void insert(Student newStudent) {
		// TODO Auto-generated method stub
		

		if(head==null)
		{
			
		    head=newStudent;
		}
		else
		{
			
			Student current=head;
			while(current.next!=null) {
				
				current=current.next;
			}
           current.next=newStudent;
		}
			
		}
	private void iterate() {
		// TODO Auto-generated method stub
		Student current=head;
		
		
		while(current!=null) {
			
			System.out.println("\nThe id is:"+current.id+",\nThe name is:"+current.name+",\nThe salary is:"+current.salary);
			
			current=current.next;
		}
		
		
	}
		
		
		
	}


