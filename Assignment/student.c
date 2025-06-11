//Accept the price ask the user if he is a student use say yes or no if student purchased more than 500 then discount is 20%
  //if he is not student then the base purchased are more than 600 discount 15% otherwise no discount.
  
  #include<stdio.h>
   int main()
   {
   	float discount;
   	int price;
   	char is_student,y,n;
   	
   	printf("Enter the price which you want=");
   	scanf("%d",&price);
   	printf("are you a student/(y/n)= \n");
   	scanf("%c",&is_student);
   	
   	
	   
   	
   	if((is_student=='y' || is_student=='Y'))
       { 
          if(price>500)
          {
          	discount=0.20*price;
          	printf("The discount is=%f",discount);
		  }
   	       
   	
         }
     else ((is_student=='n' || is_student=='N') 
            if(price>=600))
            {
            	discount=0.10*price;
            	printf(The discount is=%f,discount);
			}
           {
           {
         	 discount=0.15*price;
         	 printf("The discount is= %f",discount);
		     }
		    else
		       {
		       	printf("Sorry you have no discount");
			   }
         
   
   	                }
   	            