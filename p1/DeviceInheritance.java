package p1;

class Device
{
  String name;
  int modelNo;
  double price;
  int size;
  
  Device()
  {
	  this.name="laptop";
	  this.modelNo=99;
	  this.price=25.5;
	  this.size=25;
 }
  
Device(String name, int modelNo, double price, int size) {
	super();
	this.name = name;
	this.modelNo = modelNo;
	this.price = price;
	this.size = size;
}

String getName() {
	return name;
}

void setName(String name) {
	this.name = name;
}

int getModelNo() {
	return modelNo;
}

void setModelNo(int modelNo) {
	this.modelNo = modelNo;
}

double getPrice() {
	return price;
}

void setPrice(double price) {
	this.price = price;
}

int getSize() {
	return size;
}

void setSize(int size) {
	this.size = size;
}
  
void display()
{
  	
   System.out.println("The name of the device is:"+name);
   System.out.println("The modelNo of the device is:"+modelNo);
   System.out.println("The price of the device is:"+price);
   System.out.println("The size of the device is:"+size);
}
  

}//class Device end here


class Mobilephone extends Device//step1
{
   String os;
   int batteryBackup;
   String brand;
   
Mobilephone() {
	
	super();//step2
	this.os="android";
	this.batteryBackup=125;
	this.brand="Oppo";
}

Mobilephone(String name, int modelNo, double price, int size,String os,int batteryBackup,String brand) {
	
	
	super(name, modelNo, price, size);//step3
	this.os=os;
	this.batteryBackup=batteryBackup;
	this.brand=brand;
	
}

String getOs() {
	return os;
}

void setOs(String os) {
	this.os = os;
}

int getBatteryBackup() {
	return batteryBackup;
}

void setBatteryBackup(int batteryBackup) {
	this.batteryBackup = batteryBackup;
}

String getBrand() {
	return brand;
}

void setBrand(String brand) {
	this.brand = brand;
}
  
void display()
{
	super.display();
	System.out.println("The batterbackup of the device is:"+batteryBackup);
	System.out.println("The brand of the system is:");

}
   
}//class Mobilephone end here

class Computer extends Device//step4
{
   int processor;
   int RAM;
   int ROM;
   
Computer() {
	
	super();//step5
	this.processor=7;
	this.RAM=4;
	this.ROM=8;
	}

Computer(String name, int modelNo, double price, int size,int processor,int RAM,int ROM) {
	
	
	super(name, modelNo, price, size);//step6
	this.processor=processor;
	this.RAM=RAM;
	this.ROM=ROM;
	
}

int getProcessor() {
	return processor;
}

void setProcessor(int processor) {
	this.processor = processor;
}

int getRAM() {
	return RAM;
}

void setRAM(int rAM) {
	RAM = rAM;
}

int getROM() {
	return ROM;
}

void setROM(int rOM) {
	ROM = rOM;
}
   
 void display()
 {
	 super.display();
	 System.out.println("The processor of the computer is:"+processor);
	 System.out.println("The RAM of the computer is:"+RAM);
	 System.out.println("The ROM of the computer is:"+ROM);
	 
 }

}//class Computer end here

class DeviceInheritance {

	public static void main(String[] args) {
		
		Device d1;
		d1=new Mobilephone("Oppo",123,23.3,12,"Android",64,"Oppo");
		d1.display();
		
		d1=new Computer("Redmi",25,50.7,23,5,4,6);
		d1.display();
		
		/*Mobilephone m1=new Mobilephone();
		m1.name="redmi";
		m1.modelNo=12;
		m1.price=45.5;
		m1.size=12;
		m1.os="windows";
		m1.batteryBackup=124;
		m1.brand="Redmi";
		m1.display();
		
		Computer c1=new Computer();
		c1.name="Moto";
		c1.modelNo=14;
		c1.price=50.0;
		c1.size=15;
		c1.processor=5;
		c1.RAM=5;
		c1.ROM=4;
		c1.display();*/
		
		

	}

}
