package p1;

class Product{
	
	int id;
	String name;
	int quantity;
	int price;
	
	//default constructor
	Product()
	{
		
		this.id=234;
		this.name="Jaya";
		this.quantity=34;
		this.price=12;
	}
	
	//parameterized constructor
	public Product(int i,String nam,int quant,int pr)
	{
		this.id=i;
		this.name=nam;
		this.quantity=quant;
		this.price=pr;
		
		
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
	int getQuantity() {
		return quantity;
	}
	void setQuantity(int quantity) {
		this.quantity = quantity;
	}
	int getPrice() {
		return price;
	}
	void setPrice(int price) {
		this.price = price;
	}
	
	void display()
	{
		
		System.out.printf("\nThe product information is:%d %s %d %d",this.id,this.name,this.quantity,this.price);
	}
	
}//class product end here

public class Test12 {

	public static void main(String[] args) {
		
		Product p1=new Product();
		p1.display();
		
		Product p2=new Product(12,"Yash",78,56);
		p2.display();
		
		//p1.setId(24);
		//p1.setName("colgate");
		//p1.setQuantity(78);
		//p1.setPrice(89);
		//p1.display();
		
		//System.out.println("\nThe product id is"+p1.getId());
		//System.out.println("The product name is"+p1.getName());
		//System.out.println("The quantity of product is"+p1.getQuantity());
		//System.out.println("The price of product is"+p1.getPrice());

	}

}
