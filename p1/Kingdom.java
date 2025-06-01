package p1;

class KingdomAnimal
{
	String name;
	int species;
	int totalcount;
	
	
	KingdomAnimal()
	{
		this.name="Tiger";
		this.species=300;
		this.totalcount=100;
	}
	
	KingdomAnimal(String name, int species, int totalcount) {
		super();
		this.name = name;
		this.species = species;
		this.totalcount = totalcount;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	int getSpecies() {
		return species;
	}

	void setSpecies(int species) {
		this.species = species;
	}

	int getTotalcount() {
		return totalcount;
	}

	void setTotalcount(int totalcount) {
		this.totalcount = totalcount;
	}
	
	 void display()
	 {
		 System.out.println("The name of kingdom is:"+name);
		 System.out.println("The species of kingdom is:"+species);
		 System.out.println("The totalcount is:"+totalcount);
		 
	 }
	
	}//class KingdomAnimalend here

class Mammal extends KingdomAnimal//step 1
{
   String location;
   
   
   Mammal()
   {
	   super();//step(2)
	   this.location="land";
	   
   }

Mammal(String name,int species,int totalcount,String location) {
	
	super(name,species,totalcount);//step(3)
	this.location = location;
}

String getLocation() {
	return location;
}

void setLocation(String location) {
	this.location = location;
}

void display()
{
	super.display();
  System.out.println("The location of the mamals is:"+location);	

 }
   
   }//class mamal end here


class Bird extends KingdomAnimal//step4
{
    String location;
    
    
    Bird()
    {
    	super();//step5
    	this.location="sky";
    	
    }

	Bird(String name,int species,int totalcount,String location) {
		
		super(name,species,totalcount);//step6
		this.location = location;
	}

	String getLocation() {
		return location;
	}

	void setLocation(String location) {
		this.location = location;
	}
    
    void display()
    {
    	super.display();
    	System.out.println("The location of the bird is:"+location);
    	
    }
}//class Bird end here

class Kingdom {

	public static void main(String[] args) {
		
		/*Mammal m1=new Mammal();
		m1.name="Bat";
		m1.species=20;
		m1.totalcount=100;
		m1.location="Land";
		m1.display();
		
		Bird b1=new Bird();
		b1.name="crow";
		b1.species=2;
		b1.totalcount=20;
		b1.location="sky";
		b1.display();
		*/
		
		KingdomAnimal k1;
		k1=new Mammal("Sparrow",23,34,"sky");
		k1.display();
		
		k1=new Bird("Crow",12,23,"land");
		k1.display();
		
		
		
		
		}

}
