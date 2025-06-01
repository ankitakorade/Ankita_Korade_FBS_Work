package p2;



class Account
{
   String accountNumber;
   double balance;
   String bankName;
   
   double check_balance()
   {
	  return balance;
   }
   
  Account()
  {
	  this.accountNumber="1afb345";
	  this.balance=34.5;
	  this.bankName="SBI";
	  
  }
Account(String accountNumber, double balance, String bankName) {
	
	this.accountNumber = accountNumber;
	this.balance = balance;
	this.bankName = bankName;
}
String getAccountNumber() {
	return accountNumber;
}
void setAccountNumber(String accountNumber) {
	this.accountNumber = accountNumber;
}
double getBalance() {
	return balance;
}
void setBalance(double balance) {
	this.balance = balance;
}
String getBankName() {
	return bankName;
}
void setBankName(String bankName) {
	this.bankName = bankName;
}

@Override
public String toString() {
	return "\nAccountNumber is" + accountNumber + ", balance is:" + balance + ",\n bankName is:" + bankName ;
}
   
  /*void display()
  {
	  System.out.println("The accountnumber is:"+accountNumber);
	  System.out.println("The balance in account is:"+balance);
	  System.out.println("The bankNmae of the account is:"+bankName);
	  
  }*/
  
  
}//class account end here

class SavingAccount extends Account//step1
{
	
  double interestRate;
  
  double check_balance()
  {
	  double Total=balance+interestRate;
	  return Total;
	  
  }

SavingAccount() {
	
	super();//step2
	this.interestRate=23.3;
	
}

SavingAccount(String accountNumber, double balance, String bankName,double inrate) {
	
	super(accountNumber, balance, bankName);//step3
	this.interestRate=inrate;
	
}

double getInterestRate() {
	return interestRate;
}

void setInterestRate(double interestRate) {
	this.interestRate = interestRate;
}

@Override
public String toString() {
	
	return super.toString()+"\nSavingAccount interestRate is" + interestRate;
}
 
/*void display()
{
  super.display();
  System.out.println("The interest of the account is:"+interestRate);
}*/
  
}//class savingAccount end here

class CurrentAcount extends Account
{
  double transactionLimit;
  
  double check_balance()
  {
	  double Total=balance+transactionLimit;
	  return Total;
	  
  }

CurrentAcount() {
	
	super();//step2
	this.transactionLimit=20.0;
	
}

CurrentAcount(String accountNumber, double balance, String bankName,double tranLimit) {
	
	super(accountNumber, balance, bankName);
	this.transactionLimit=tranLimit;
	
}
  
  double getTransactionLimit() {
	return transactionLimit;
}

void setTransactionLimit(double transactionLimit) {
	this.transactionLimit = transactionLimit;
}

@Override
public String toString() {
	
	return super.toString()+"\nCurrentAcount transactionLimit is:" + transactionLimit;
}

/*void display()
  {
	  super.display();
	  System.out.println("The transactionlimitofthe account is:"+transactionLimit);
	  
  }

}//class CurrentAccount end here

/*class Bankaccount {

	public static void main(String[] args) {
		
		Account a1;
		a1=new SavingAccount("12hgj",12.2,"RBI",24.6);
		a1.display();
		
		a1=new CurrentAcount("345asb",78.8,"BM",45.5);
		a1.display();
		
		a1.check_balance();
		a1.check_balance();
		a1.check_balance();
    
		/*SavingAccount s1=new SavingAccount();
		s1.accountNumber="67gav89";
		s1.balance=34.4;
		s1.bankName="SBI";
		s1.interestRate=67.6;
		s1.display();
		
		CurrentAcount c1=new CurrentAcount();
		c1.accountNumber="12fg678";
		c1.balance=45.5;
		c1.bankName="RBI";
		c1.transactionLimit=600;
		c1.display();

	}


*/


class Bankoverride {

	public static void main(String[] args) {
		
		SavingAccount s1=new SavingAccount();
		System.out.println(s1);
		
		CurrentAcount c1=new CurrentAcount();
		System.out.println(c1);
	}
		// TODO Auto-generated method stub

	}

}
