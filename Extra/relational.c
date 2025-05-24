//A program to check whether the input integer number is positive or negative.

//Include header file
#include<stdio.h>
 int main()
 {
 	int num;
 	//Accepting the input from the user
 	printf("Enter the number which you want");
 	scanf("%d",&num);
 	
 	//Check the input integer is positive or negative
 	if(num>0)
 	   printf("The number is positive");
 	else if(num<0)
 	   printf("The number is negative"); 
 	    else
 	       printf("The number is neither positive not a negative plz enter valid number");
 	       
 	
 	
		
		}