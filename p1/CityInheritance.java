package p1;

class City
{
   String name;
   int population;
   String state;
   
   City()
   {
	 this.name="Pune";
	 this.population=2000;
	 this.state="Maharashtra";
   }
   
   
City(String name, int population, String state) {
	super();
	this.name = name;
	this.population = population;
	this.state = state;
}


String getName() {
	return name;
}


void setName(String name) {
	this.name = name;
}


int getPopulation() {
	return population;
}


void setPopulation(int population) {
	this.population = population;
}


String getState() {
	return state;
}


void setState(String state) {
	this.state = state;
}


void display() 
{
   System.out.println("The name of city is:"+name);
   System.out.println("The population of city is:"+population);
   System.out.println("The stste of city is:"+state);

}
  
}//class City end here


class MetroCity extends City
{
    String country;
    int colleges;
    
    
	MetroCity() {
		
		super();//step1
		this.country="India";
		this.colleges=10;
		
		
	}
	
	
	MetroCity(String name, int population, String state,String coun,int college) {
		
		
		super(name, population, state);//step2
		this.country=coun;
		this.colleges=college;

	}


	String getCountry() {
		return country;
	}


	void setCountry(String country) {
		this.country = country;
	}


	int getColleges() {
		return colleges;
	}


	void setColleges(int colleges) {
		this.colleges = colleges;
	}
    
    void display()
    {
    	
    	super.display();//step3
    	System.out.println("The country of the city is:"+country);
    	System.out.println("The total colleges in the city :"+colleges);
    }
    
    
 }//class MetroCity end here


class NonMetro extends City//step1
{
	
      String metroname;
      
      
      NonMetro()
      {
    	  super();//step2
    	  this.metroname="Local";
      }

	NonMetro(String name,int population,String state,String metro) {
		
		super(name,population,state);//step3
		
		 this.metroname = metro;
	}
     
   void display()
   {
	   super.display();
	   System.out.println("The metro name of city is:"+metroname);
   }
      
      
}//class NonMetro end here

class CityInheritance {

	public static void main(String[] args) {
		
		City c1;
		c1=new MetroCity("Delhi",1000,"Maharashtra","America",67);
		
		c1=new NonMetro("Lucknow",200,"Karnatka","Expree Pune");
		c1.display();
		
		/*MetroCity m1=new MetroCity();
		m1.name="pune";
		m1.population=1000;
		m1.state="Maharashtra";
		m1.country="India";
		m1.colleges=10;
		m1.display();
		
		NonMetro m2=new NonMetro();
		m2.name="mumbai";
		m2.population=300;
		m2.state="Maharashtra";
		m2.metroname="Local";
		m2.display();
		*/

	}

}
