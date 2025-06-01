package p1;

class Fruit
{
  String color;
  String Shape;
  int seeds;
  
  Fruit()
  {
	  this.color="Yellow";
	  this.Shape="circle";
	  this.seeds=2;
	  
	}
  
Fruit(String color, String shape, int seeds) {
	
	
	this.color = color;
	Shape = shape;
	this.seeds = seeds;
}
  
 void display()
 {
	 System.out.println("The color of the fruits is:"+color);
	 System.out.println("The shape of the fruits is:"+Shape);
	 System.out.println("The number of the seeds in the fruit is:"+seeds);
	 
 }
 

}//class Fruit end here

class Apple extends Fruit//step 1
{
   String varitey;
   boolean isCrunchy;
   
  Apple()
  {
	  super();//step2
	  this.varitey="Fuji";
	  this.isCrunchy=true;
  }
  
Apple(String color,String shape,int seeds,String varitey, boolean isCrunchy) {
	
	super();//step3
	this.varitey = varitey;
	this.isCrunchy = isCrunchy;
}

String getVaritey() {
	return varitey;
}

void setVaritey(String varitey) {
	this.varitey = varitey;
}

boolean isCrunchy() {
	return isCrunchy;
}

void setCrunchy(boolean isCrunchy) {
	this.isCrunchy = isCrunchy;
}
   
  void display()
  {
	  super.display();
	  System.out.println("The varitey of the apple is:"+varitey);
	  System.out.println("The iscrunchy apple is:"+isCrunchy);
	  
  }
  
}//class apple end here

class Banana extends Fruit
{
	String taste;
	double length;
	
	Banana() {
		
		super();
		this.taste="sweet";
		this.length=15.5;
		
	}
	
	Banana(String color, String shape, int seeds,String taste,int length) {
		
		super(color, shape, seeds);
		this.taste=taste;
		this.length=length;
	}

	String getTaste() {
		return taste;
	}

	void setTaste(String taste) {
		this.taste = taste;
	}

	double getLength() {
		return length;
	}

	void setLength(double length) {
		this.length = length;
	}
	
	void display()
	{
		super.display();
		System.out.println("The taste of the banana is:"+taste);
		System.out.println("The length of the banana is:"+length+"cm");
		
	}
	
}//class banana end here

public class Fruitinhritance {

	public static void main(String[] args) {
		
		Fruit f1;
		f1=new Apple("Red","circle",4,"Fuji",false);
		f1.display();
		
		f1=new Banana("yellow","cylinder",5,"sweet",10);
		f1.display();
	
		//Apple a1=new Apple();
		//a1.color="RED";
		//a1.Shape="Circle";
		//a1.seeds=10;
		//a1.varitey="Gama";
		//a1.isCrunchy=true;
		//a1.display();
		
		//Banana b1=new Banana();
		//b1.color="Yellow";
		//b1.Shape="cylinder";
		//b1.seeds=0;
		//b1.taste="sweet";
		//b1.length=1.5;
		//b1.display();
		
		

	}

}
