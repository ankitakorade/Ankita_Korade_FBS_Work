//Find greatest number of three number

#include<stdio.h>
 int check_greaterNumber(int,int,int);
 int main()
 {
 	 int num1,num2,num3;
 	printf("Enter the value of num1,num2,num3=");
 	scanf("\n%d,\n%d,\n%d",&num1,&num2,&num3);
 	 
 	int s;
 	s=check_greaterNumber(num1,num2,num3);
    printf("%d",s);
 }
 
 int check_greaterNumber(int num1,int num2,int num3)
 {
   
 	if((num1>num2) && (num1>num3))
 	   return 1;
 	   
	else if((num2>num3) && (num2>num1))
	    return 0;
	    
	else
	  return 2;
	 
}
	    
	

	   
 