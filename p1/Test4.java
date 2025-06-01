package p1;

class Complex{
	
	double real;
	double imaginary;
	
	//default constructor
	Complex()
	{
		
		this.real=5.6;
		this.imaginary=-3.2;
	}
	
	//parameterized constructor
	public Complex(double r,double ima)
	{
		
		this.real=r;
		this.imaginary=ima;
	}	
	
	void setReal(double real) {
		this.real = real;
	}


	void setImaginary(double imaginary) {
		this.imaginary = imaginary;
	}

    
	double getReal() {
		return real;
	}


	double getImaginary() {
		return imaginary;
	}


	void display()
	{
		
		System.out.printf("\nThe complex number is:%f %f",this.real,this.imaginary);
	}
}//class display end here



public class Test4 {

	public static void main(String[] args) {
		
		 Complex c1=new Complex();
		 c1.display();
		 
		 Complex c2=new Complex(3.12,-5.6);
		 c2.display();
		 //c1.setReal(-3.2);
		 //c1.setImaginary(-5.25);
		 //c1.display();
		    
		    System.out.println("\nThe real number is"+c1.getReal());
		    System.out.println("The imaginary number is"+c1.getImaginary());
		    
		   

	}

}
