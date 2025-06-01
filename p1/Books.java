package p1;

class Bookss
{
  String author;
  String title;
  String shape;
  int size;
  
  Bookss()
  {
	this.author="Abdul kalam";
	this.title="Agnipankh";
	this.shape="Rectangle";
	this.size=12;
	  
  }
Bookss(String author, String title, String shape, int size) {

	this.author = author;
	this.title = title;
	this.shape = shape;
	this.size = size;
}
String getAuthor() {
	return author;
}
void setAuthor(String author) {
	this.author = author;
}
String getTitle() {
	return title;
}
void setTitle(String title) {
	this.title = title;
}
String getShape() {
	return shape;
}
void setShape(String shape) {
	this.shape = shape;
}
int getSize() {
	return size;
}
void setSize(int size) {
	this.size = size;
}
  
 void display()
 {
	 System.out.println("The author name of the book is:"+author);
	 System.out.println("The title of the book is:"+title);
	 System.out.println("The shape of the book is:"+shape);
	 System.out.println("The size of the book is:"+size);
	 
 }

}//class book end here

class Novel extends Bookss//step1
{
  String genre;

Novel() {
	
	super();//step2
	this.genre="Historical";
	
}

Novel(String author, String title, String shape, int size,String genre) {
	
	super(author, title, shape, size);//step3
	this.genre=genre;

}

String getGenre() {
	return genre;
}

void setGenre(String genre) {
	this.genre = genre;
}
  
  void display()
  {
	  super.display();
	  System.out.println("The category of book is:"+genre);
	  
  }

}//class Novel end here

class Textbook extends Bookss//step4
{
  	String subject;
  	int chapterNo;
  	
	Textbook() {
		
		super();//step5
		this.subject="Mathematics";
		this.chapterNo=2;

	}
	Textbook(String author, String title, String shape, int size,String subject,int chapterNo) {
		
		super(author, title, shape, size);
		this.subject=subject;
		this.chapterNo=chapterNo;
	
	}
	String getSubject() {
		return subject;
	}
	void setSubject(String subject) {
		this.subject = subject;
	}
	int getChapterNo() {
		return chapterNo;
	}
	void setChapterNo(int chapterNo) {
		this.chapterNo = chapterNo;
	}
  	
  	void display()
  	{
  		super.display();
  		System.out.println("The subject of the textbook is:"+subject);
  		System.out.println("The chapterNo ofthe textbook is:"+chapterNo);
  		
  	}

}//class textbook end here

class Books {

	public static void main(String[] args) {
		
		
		Bookss b1;
		b1=new Novel("Abc","tyi","rectangle",12,"Romance");
		b1.display();
		
		b1=new Textbook("LMN","Abdul kalam","Square",56,"Math",4);
		b1.display();
		
		/*Novel n1=new Novel();
		n1.author="Sane guruji";
		n1.title="Shyamchi Ai";
		n1.shape="Rectangle";
		n1.size=30;
		n1.genre="mystery";
		n1.display();
		
		Textbook t1=new Textbook();
		t1.author="Ravindrnath Tagor";
		t1.title="Anthem";
		t1.shape="square";
		t1.size=15;
		t1.subject="physics";
		t1.chapterNo=5;
		t1.display();*/
		
		
		

	}

}
