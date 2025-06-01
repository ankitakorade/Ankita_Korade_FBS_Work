package p1;

class Bank{
	
	void approveloan(int a,String nam,int p)
	 {
		System.out.println("The rollno of the student is:"+a);
		System.out.println("The name of the student is:"+nam);
		
		if(p>80)
		{
			System.out.println("Approve the loan to the student is:2 Lakh");
		}
		else if(p<80 && p>60)
		{
			System.out.println("The approve loan to the student is:1 Lakh");
		}
		else if(p<60 && p>40)
		{
			System.out.println("The approve loan to the student is:50K");
		}
		else if(p<40)
		{
			System.out.println("No loan approved to the student");
		}
		else
		{
			System.out.println("Sorry there is no loan for student");
		}
	}

	
	void approveloan(String str,int id,double sal)
	{
		System.out.println("The name of the employee is:"+str);
		System.out.println("The id of the employee is:"+id);
		
		if(sal>12)
		{
			System.out.println("The loan approve to the employee is:7lakh");
		}
		else if(sal<12 && sal>10)
		{
			System.out.println("The loan approve to the employee is:6Lakh");
		}
		else if(sal<10 && sal>10)
		{
			System.out.println("The loan approve to the employee is:5Lakh");
		}
		else if(sal<6 && sal>4)
		{
			System.out.println("The loan approve to the employee is:4Lakh");
		}
		else if(sal<4)
		{
			System.out.println("No loan approved:");
		}
		else
		{
			System.out.println("sorry there is no loan for the employee");
		}
	}
}//class bank end here

public class Testbank {

	public static void main(String[] args) {
		
		Bank b1=new Bank();
		b1.approveloan(12,"akshada",50);
		b1.approveloan("adity",24,23.3);
		
		

	}

}
