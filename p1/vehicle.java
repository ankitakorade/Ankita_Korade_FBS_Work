package p1;

class Vehicles
{
  int wheels;
  int fuel;
  String color;
  int seat;
  
  
  Vehicles()
  {
	  this.wheels=4;
	  this.fuel=1;
	  this.color="Red";
	  this.seat=5;
	  
  }
  
Vehicles(int wheels, int fuel, String color, int seat) {
	super();
	this.wheels = wheels;
	this.fuel = fuel;
	this.color = color;
	this.seat = seat;
}

int getWheels() {
	return wheels;
}

void setWheels(int wheels) {
	this.wheels = wheels;
}

int getFuel() {
	return fuel;
}

void setFuel(int fuel) {
	this.fuel = fuel;
}

String getColor() {
	return color;
}

void setColor(String color) {
	this.color = color;
}

int getSeat() {
	return seat;
}

void setSeat(int seat) {
	this.seat = seat;
}
  
  void display()
  {
	  System.out.println("The number of wheels is:"+wheels);
	  System.out.println("The amount of fuel is:"+fuel);
	  System.out.println("The color of the vehicles is:"+color);
	  System.out.println("The seat of the vehicle is:"+seat);
	  
  }
  
 }//class vehicles is

class Car extends Vehicles//step1
{
   String system;
   int doors;
   
   Car()
   {
	   super();//step2
	   this.system="music system";
	   this.doors=4;
	   
   }
   
Car(int wheels,int fuel,String color,int seat,String system, int doors) {
	
	super(wheels,fuel,color,seat);//step3
	this.system=system;
	this.doors=doors;
}

String getSystem() {
	return system;
}

void setSystem(String system) {
	this.system = system;
}

int getDoors() {
	return doors;
}

void setDoors(int doors) {
	
	this.doors = doors;
}
   
 void display()
 {
	 super.display();
	 System.out.println("The system of the car is :"+system);
	 System.out.println("The number of the doors is:"+doors);
 }
   
}//class Car end here

class EleScooter extends Vehicles//step4
{
	int batterypower;
	String weight;
	
	
	EleScooter()
	{
		this.batterypower=100;
		this.weight="lightweight";
		
	}
	
	
	EleScooter(int wheel,int fuel,String color,int seat,int batterypower, String weight) {
		
		super(wheel,fuel,color,seat);//step5
		this.batterypower = batterypower;
		this.weight=weight;
	}


	int getBatterypower() {
		return batterypower;
	}


	void setBatterypower(int batterypower) {
		this.batterypower = batterypower;
	}


	String getWeight() {
		return weight;
	}


	void setWeight(String weight) {
		this.weight = weight;
	}
	
	void display()
	{
		super.display();
		System.out.println("The batterpower of scooter is:"+batterypower);
		System.out.println("The weight os scooter is:"+weight);
	}
}//class scooter end here

class vehicle {

	public static void main(String[] args) {
		
		Car c1=new Car();
		c1.wheels=5;
		c1.fuel=1;
		c1.color="blue";
		c1.seat=4;
		c1.system="music system";
		c1.doors=4;
		c1.display();
		
		EleScooter e1=new EleScooter();
		e1.wheels=6;
		e1.fuel=2;
		e1.color="black";
		e1.seat=6;
		e1.batterypower=200;
		e1.weight="Lightweight";
		e1.display();
			
		
		
	}

}
