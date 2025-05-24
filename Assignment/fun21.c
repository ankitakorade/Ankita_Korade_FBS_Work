//Find price of item when discount is given

#include<stdio.h>
 void calculate_discount();
 void main()
 {
    calculate_discount();
   }
   void calculate_discount()
   {
    int price,final_price,discount;
 	printf("Enter the discount of price=");
 	scanf("%d",&price);
 	
 	 if((discount>=10) && (discount<=20)) 
 	  {
 	  	printf("The price of item is=100");
 	  }
     	else if((discount>=50) && (discount<=100))
	        {
	   	         printf("The price of item is=50");
	   	
	             }
	     else if(discount<=10)
	           {
	           	printf("The price of item is=10");
	           }
	       
	         else
	            {
	            	printf("The price of item is unaffrodable");
				}
			   }
	   
	              
	                 
	
 	
 	
                                     