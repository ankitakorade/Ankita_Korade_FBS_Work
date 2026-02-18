//Accept the price ask the user if he is a student use say yes or no if student purchased more than 500 then discount is 20%
  //if he is not student then the base purchased are more than 600 discount 15% otherwise no discount.
  
  #include<stdio.h>
  #include<string.h>
  float calculateDiscount();
   int main()
   {
   	  float d;
   	 d=calculateDiscount();
   	 printf("%f",d);
   }
   
   float calculateDiscount()
   {
    float discount;
   	float price,dicount=0,
   	finaldiscount;
   	char student[10];
   	printf("Enter the total purchase amount: ");
   	scanf("%f",&price);
     getchar();
   	
   	printf("are you a student/(y/n)= \n");
    fgets(student,sizeof(student),stdin);
    student[strcmp(student,"\n")]=0;
    
    if(strcmp(student,"yes")==0)
    {
    	if(price>500)
    	  discount=0.20*price;
    	else
    	  discount=0.10*price;
	}
	else if(strcmp(student,"no")==0)
	{
		if(price>600)
		  dicount=0.15*price;
		else
		  printf("Invalid input for students ");
		  return;
	}
	finaldiscount=price-discount;
   	printf("Discount applied: %f\n,discount");
    return finaldiscount;
    }
   	
	   
   	
   	