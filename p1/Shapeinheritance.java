package p1;

class Shapes
{
	int area;
	
 int calculate_area()
 {
	 
	 return area;
 }
	
	Shapes()
	{
		this.area=12;
		
	}

	Shapes(int area) {
		super();
		this.area = area;
	}

	int getArea() {
		return area;
	}

	void setArea(int area) {
		this.area = area;
	}
	
	void display()
	{
		System.out.println("The area of the shape is:"+area+"cm");
		
	}
	
}//class shape end here

class Triangle extends Shapes//step 1
{
	
    double height=10.5;
    int base=19;
    
	Triangle() {
		
		super();//step2
		this.height=29.5;
		this.base=23;
	
	}
	Triangle(int area,double height,int base) {
		
		super(area);//step3
		this.height=height;
		this.base=base;
	
	}
	double getHeight() {
		return height;
	}
	void setHeight(double height) {
		this.height = height;
	}
	int getBase() {
		return base;
	}
	void setBase(int base) {
		this.base = base;
	}
    
	void display()
	{
		super.display();
		System.out.println("The height of the triangle is:"+height);
		System.out.println("The base of the triangle is:"+base);
		
	}
    
}//class Triangle end here

class Circle extends Shapes//step4
{
	int radius;

	Circle() {
		
		super();//step5
		this.radius=7;
		
	}

	Circle(int area,int radius) {
		
		super(area);//step6
		this.radius=radius;
		
  }

	int getRadius() {
		return radius;
	}

	void setRadius(int radius) {
		this.radius = radius;
	}
	
	void display()
	{
		super.display();
		System.out.println("The radius of the circle is:"+radius);
		
	}
}//class Circle end here

class Rectangles extends Shapes//step7
{
   int length;
   int width;
   
   
Rectangles() {
	
	super();//step8
	this.length=15;
	this.width=56;
	
}
Rectangles(int area,int length,int width) {
	
	super(area);//step9
	this.length=length;
	this.width=width;
	
}
int getLength() {
	return length;
}
void setLength(int length) {
	this.length = length;
}
int getWidth() {
	return width;
}
void setWidth(int width) {
	this.width = width;
}
   
void display()
{
   super.display();
   System.out.println("The length of rectangle is:"+length);
   System.out.println("The width of rectangle is:"+width);
}
   
}//class Rectangle end here

class Shapeinheritance {

	public static void main2(String[] args) {
        
		Shapes s1;//generic ref
		s1=new Triangle(34,5.5,67);
		s1.display();
		
		s1=new Circle(56,7);
		s1.display();
		
		s1=new Rectangles(78,12,23);
		s1.display();
		
		/*Triangle t1=new Triangle();
		t1.area=29;
		t1.base=12;
		t1.height=45;
		t1.display();
		
		Circle c1=new Circle();
		c1.area=34;
		c1.radius=6;
		c1.display();
		
		Rectangles r1=new Rectangles();
		r1.area=45;
		r1.length=34;
		r1.width=78;
		r1.display();
	*/

	}


public static void main(String[] args)
	{
		Shapes[] arrSha;
		arrSha=new Shapes[4];
		arrSha[0]=new Triangle(12,56.6,78);
		arrSha[1]=new Circle(34,56);
		arrSha[2]=new Rectangles(12,89,23);
		
		for(int i=0;i<arrSha.length;i++)
		{
			arrSha[i].display();
			System.out.println();
			
		}
		
	}
}

