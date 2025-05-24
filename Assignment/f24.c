//perform operation base on choice

//perform operation base on choice

#include<stdio.h>
void checkevenodd();
void calculatesalary();
 int main()
 {
 	int choice;
 	while(1)
	 {
	 	printf("\n======MENU============\n");
	     printf("1.checkevenodd\n");
	     printf("2.calculatesalary\n");
	     printf("3.exist\n");
	     printf("Enter your choice\n");
     	scanf("%d",&choice);
	
	switch (choice)
	      {
	         case 1:
	          	checkevenodd();
	          	break;
	         case 2:
	          	calculatesalary();
	          	break;
	         case 3: 
	          	("existing the program\n");
	         default:
	          		printf("Invalid choice!PLz enter valid choice\n");
			  }
	
	
	
   }
  
    }
void checkevenodd()
 	{
 		int n;
 		printf("Enter the number which you want=");
 	    scanf("%d",&n);
	 
 	if(n%2==0)
 	 printf("The number is even");
 	 else
 	  {
 	  	printf("The number is odd");
	   }
     }
	  
void calculatesalary()
	 {
	 	int total,choice;
	 	char menu;
 	   float basic,hra,ta,da;
	     
	    printf("Enter basic salary=");
	    scanf("%f",&basic);
	    hra=0.2*basic;
	    da=0.5*basic;
	    ta=0.10*basic;
	    total=basic+hra+ta;
	    printf("%f,%f,",hra,da,ta);
	    printf("Total salary is=%d",total);
             
			 }
	
	
	