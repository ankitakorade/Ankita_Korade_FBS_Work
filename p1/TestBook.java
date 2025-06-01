package p1;

class Book{
	
	int number;
	String name;
	int quantity;
	
	Book()//default constructor
	{
		
		this.number=123;
		this.name="Agnipankh";
		this.quantity=23;
		
	}
	
	//parameterized constructor
	public Book(int no,String nm,int quan)
	{
		
		this.number=no;
		this.name=nm;
		this.quantity=quan;
	}	
	
	
	
	int getNumber() {
		return number;
	}

	void setNumber(int number) {
		this.number = number;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	int getQuantity() {
		return quantity;
	}

	void setQuantity(int quantity) {
		this.quantity = quantity;
	}

	void display()
	{
		
		System.out.printf("The information of book is: %d %s %d",this.number,this.name,this.quantity);
	}
}//class book end here


public class TestBook {

	public static void main(String[] args) {
		
		Book b1=new Book();
		System.out.println("The value of b1 is"+b1);
		//Book b2=new Book(12,"Poor dad",67);
		//b2.display();
        
		//b1.number=123;
		//b1.name="Bhagvatgita";
		//b1.quantity=45;
		//b1.display();
		
		//b1.setNumber(123);
		//b1.setName("Bhagvatgita");
		//b1.setQuantity(67);
		//b1.display();
		
		//System.out.println("The number of book is:"+b1.getNumber());
		//System.out.println("The name of the book is:"+b1.getName());
		//System.out.println("The quantity of the book is:"+b1.getQuantity());
		

	}

}
