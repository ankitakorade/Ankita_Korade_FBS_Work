package p1;

class Sports
{
	int player;
	int jersyNo;
	String Teamname;
	
	Sports()
	{
		this.player=48;
		this.jersyNo=7;
		this.Teamname="CSK";
		
	}
	
	Sports(int player, int jersyNo, String teamname) {
		super();
		this.player = player;
		this.jersyNo = jersyNo;
		Teamname = teamname;
	}

	int getPlayer() {
		return player;
	}

	void setPlayer(int player) {
		this.player = player;
	}

	int getJersyNo() {
		return jersyNo;
	}

	void setJersyNo(int jersyNo) {
		this.jersyNo = jersyNo;
	}

	String getTeamname() {
		return Teamname;
	}

	void setTeamname(String teamname) {
		Teamname = teamname;
	}
	
	void display()
	{
		System.out.println("The player in the sports is:"+player);
		System.out.println("The jersyNo of the player is:"+jersyNo);
		System.out.println("The teamname of the sports is:"+Teamname);
		
	}
	
}//class Sports end here

class Football extends Sports//step1
{
   int goals;
   int halves;
   
Football() {
	
	super();//step2
	this.goals=1;
	this.halves=2;

}

Football(int player, int jersyNo, String teamname,int goals,int halves) {
	
	super(player, jersyNo, teamname);//step3
	this.goals=goals;
	this.halves=halves;
	
}

int getGoals() {
	return goals;
}

void setGoals(int goals) {
	this.goals = goals;
}

int getHalves() {
	return halves;
}

void setHalves(int halves) {
	this.halves = halves;
}
   
  void display()
  {
	  
	  super.display();
	  System.out.println("The goals of the football is:"+goals);
	  System.out.println("The halves of the football is:"+halves);
  }
   
}//class Football end here

class Cricket extends Sports//step4
{
   int wicket;
   int over;
   String stadiumName;
   
Cricket() {
	
	super();//step 5
	this.wicket=5;
    this.over=20;
    this.stadiumName="Vankhede";

}
Cricket(int player, int jersyNo, String teamname,int wc,int over,String stdName) {
	
	super(player, jersyNo, teamname);//step6
	this.wicket=wc;
	this.over=over;
	this.stadiumName=stdName;

}
int getWicket() {
	return wicket;
}
void setWicket(int wicket) {
	this.wicket = wicket;
}
int getOver() {
	return over;
}
void setOver(int over) {
	this.over = over;
}
String getStadiumName() {
	return stadiumName;
}
void setStadiumName(String stadiumName) {
	this.stadiumName = stadiumName;
}
  
void display()
{
  super.display();
  System.out.println("The wicket of the cricket is:"+wicket);
  System.out.println("The over of the cricket is:"+over);
  System.out.println("The Stadiumname of the cricckcet is:"+stadiumName);
}
   

}//class Cricket end here

public class Sportsinheritance {

	public static void main(String[] args) {
		
		/*Football b1=new Football();
		b1.player=12;
		b1.jersyNo=8;
		b1.Teamname="RCB";
		b1.goals=4;
		b1.halves=1;
		b1.display();
		
		Cricket c1=new Cricket();
		c1.player=24;
		c1.jersyNo=9;
		c1.Teamname="DC";
		c1.wicket=6;
		c1.over=4;
		c1.stadiumName="ChiinaSwami";
		c1.display();
		*/
		
		Sports s1;
		s1=new Football(12,23,"RCB",4,2);
		s1.display();
		
		s1=new Cricket(34,45,"CSK",45,20,"ChinnaSwami");
		s1.display();
		
		}

}
