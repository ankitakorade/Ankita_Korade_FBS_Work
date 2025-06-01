package p1;

class Hospital{
	
	String name;
	int numberOffBed;
	int AdmitFee;
	int numberOfstaff;
	
	
	
	
	void setName(String name) {
		this.name = name;
	}


	void setNumberOffBed(int numberOffBed) {
		this.numberOffBed = numberOffBed;
	}


	void setAdmitFee(int admitFee) {
		AdmitFee = admitFee;
	}


	void setNumberOfstaff(int numberOfstaff) {
		this.numberOfstaff = numberOfstaff;
	}
	


	String getName() {
		return name;
	}


	int getNumberOffBed() {
		return numberOffBed;
	}


	int getAdmitFee() {
		return AdmitFee;
	}


	int getNumberOfstaff() {
		return numberOfstaff;
	}


	Hospital()//default constructor
	{
		this.name="Sanjivani";
		this.numberOffBed=34;
		this.AdmitFee=2000;
		this.numberOfstaff=30;
	}
	
	
	void display()
	{
		
		System.out.printf("The information of hospital is: %s %d %d %d",this.name,this.numberOffBed,this.AdmitFee,this.numberOfstaff);
	}
}//class hospital end here

public class TestHospital {

	public static void main(String[] args) {
	
		Hospital h1=new Hospital();
		h1.setName("Sanjivani");
		h1.setNumberOffBed(56);
		h1.setAdmitFee(2000);
		h1.setNumberOfstaff(67);
		h1.display();
		
		System.out.println("The name of hospital:"+h1.getName());
		

	}

}
