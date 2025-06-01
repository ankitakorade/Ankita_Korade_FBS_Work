package p2;


class BankAccount
{
   int accNo;
   String name;
   double balance;
   static double interestrate;
   
   static {
	   
	   interestrate=9.5;
   }
   
   
BankAccount()
{
   this.accNo=123456456;
   this.name="Usha";
   this.balance=56.8;
  

}
   
BankAccount(int accNo, String name, double balance) {

	this.accNo = accNo;
	this.name = name;
	this.balance = balance;
	
}

double getBalance() {
	return balance;
}

void setBalance(double balance) {
	this.balance = balance;
}

double getInterestrate() {
	return interestrate;
}

  static void setInterestrate(double ir) {
	
     interestrate=ir;
}

int getAccNo() {
	return accNo;
}

void setAccNo(int accNo) {
	this.accNo = accNo;
}

String getName() {
	return name;
}

void setName(String name) {
	this.name = name;
}


   
 void display()
 {
	 System.out.println("The accountNumber is:"+this.accNo);
	 System.out.println("The name is:"+this.name);
	 System.out.println("The balance is:"+this.balance);
	 System.out.println("The interestrate is:"+interestrate);
	 
 }

}

class Test {

	public static void main(String[] args) {
		
		BankAccount b1=new BankAccount(1234,"Lata",78.9);
		b1.display();
		
		BankAccount b2=new BankAccount(45678,"Ankita",5000);
		b2.display();
		
		BankAccount b3=new BankAccount(678,"Radha",900);
		b3.display();
		
		BankAccount.setInterestrate(0.5);
		
		b1.display();
		b2.display();
		b3.display();
		

	}

}
