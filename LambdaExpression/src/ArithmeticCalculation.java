
public class ArithmeticCalculation {

	public static void main(String[] args) {
		
		ArithmeticCalculation addition=new Addition();
		System.out.println(addition.calc(12,12));
		
		ArithmeticCalculation subtract=new ArithmeticCalculation()
				{
			
			       public intcalc(int op1, int op2) {
			    	   
			    	   return op1-op2;
			       }
				}
	}
	  
	
}
