//Program to find largest of three input numbers.

//include header file
#include<stdio.h>
  int main()
  {
  	//Declare the variable
  	int num1,num2,num3;
  	
  	//Accepting the input from the user
  	printf("Enter the value of num1,num2,num3");
  	scanf("%d,%d,%d",&num1,&num2,&num3);
  	
  	//Find the largest input numbers
  	if((num1>num2)&&(num1>num3))
  	  printf("The numberb num1 is greater number");
  	  
  	else if((num2>num3)&&(num2>num1))
  	  printf("The num2 is greater number");
  	  
  	else
  	   printf("The number num3 is greater number");
  	  
  	  
  	
  	
  	
  }