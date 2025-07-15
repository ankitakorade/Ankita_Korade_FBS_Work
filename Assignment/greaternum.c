//Find greatest number of three number

#include<stdio.h>
 int main()
 {
 	int num1,num2,num3;
 	printf("Enter the value of num1,num2,num3=");
 	scanf("\n%d,\n%d,\n%d",&num1,&num2,&num3);
 	 
 	if((num1>num2) && (num1>num3))
 	  {
 	  	printf("The num1 is greater number");
	   }
	   else if((num2>num1) && (num2>num3))
	   {
	   	printf("The num2 is greater number");
	   }
	   else
	    {
		  printf("The num3 is greater number");
		}
		}

	   
 