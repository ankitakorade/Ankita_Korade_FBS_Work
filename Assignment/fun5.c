//Calculating total salary based on basic

#include<stdio.h>
void basic_salary();
void total_salary();
void main()
 {

    basic_salary();	
    total_salary();
   }
   
   void basic_salary()
   {
	int basic;
	float da,ta,hra;
	
	printf("Enter the value of basic=");
	scanf("%d",&basic);
	
	if(basic<=5000)
	  {
	  	da=(0.1*5000);
	  	ta=(0.2*5000);
	  	hra=(0.2*5000);
	  }
	  else
	  {
	  	da=(0.15*5000);
	  	ta=(0.25*5000);
	  	hra=(0.30*5000);
	  }
	   printf("\nThe value of da is= %f",da);
	   printf("\nThe value of ta is= %f",ta);
	   printf("\nThe value of hra is=%f",hra);
      }
      
      void total_salary()
      {
      	int da,ta,hra,salary;
	   salary=da+ta+hra;
       printf("\nThe total salary is= %d",salary);
      }