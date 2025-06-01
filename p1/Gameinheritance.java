package p1;

class Game
{
  int numberOfplayers;
  String name;
  
  Game()
  {
	  
	  this.numberOfplayers=10;
	  this.name="National game";
  }
Game(int numberOfplayers, String name) {
	super();
	this.numberOfplayers = numberOfplayers;
	this.name = name;
}
int getNumberOfplayers() {
	return numberOfplayers;
}
void setNumberOfplayers(int numberOfplayers) {
	this.numberOfplayers = numberOfplayers;
}
String getName() {
	return name;
}
void setName(String name) {
	this.name = name;
}
  
void display()
{
  System.out.println("The number of players is:"+numberOfplayers);
  System.out.println("The name of the game is:"+name);
}
  
  
}//class Game end here

class Chess extends Game//step 1
{
   int boardSize=8;
   int timelimit=5;
   
Chess() {
	super();//step2
	this.boardSize=8;
	this.timelimit=1;
	
}
Chess(int numberOfplayers, String name,int boardSize,int timelimit) {
	
	super(numberOfplayers, name);
	this.boardSize=boardSize;
	this.timelimit=timelimit;
	
}
int getBoardSize() {
	return boardSize;
}
void setBoardSize(int boardSize) {
	this.boardSize = boardSize;
}
int getTimelimit() {
	return timelimit;
}
void setTimelimit(int timelimit) {
	this.timelimit = timelimit;
}

void display()
{
  super.display();
  System.out.println("The boardsize of the chess is:"+boardSize);
  System.out.println("The timelimit of chess is:"+timelimit+"minutes");

}
   
   
}//class Chess end here

class Ludo extends Game//step4
{
	int numberOftokens;
	String color;
	
	Ludo() {
		super();//step5
		System.out.println("The numberOftokens of ludo is:"+numberOftokens);
		System.out.println("The color ofthe ludo is:"+color);
		
	}
	
	Ludo(int numberOfplayers, String name,int numberOftokens,String color) {
		
		super(numberOfplayers, name);//step6
		this.numberOftokens=numberOftokens;
		this.color=color;
		
	}
	
	void display()
	{
		super.display();
		this.numberOftokens=2;
		this.color="Purple";
		
	}
	}//class ludo end here


class Gameinheritance {

	public static void main(String[] args) {
		
		Game g1;
		g1=new Chess(34,"DC",9,6);
		g1.display();
		
		g1=new Ludo(45,"CSK",5,"red");
		g1.display();
		
		/*Chess c1=new Chess();
		c1.numberOfplayers=4;
		c1.name="International";
		c1.boardSize=8;
		c1.timelimit=4;
		c1.display();
		
		Ludo l1=new Ludo();
		l1.numberOfplayers=2;
		l1.name="Not given";
		l1.numberOftokens=3;
		l1.color="Blue";
		l1.display();
       */
	}

}
