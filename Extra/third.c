#include <stdio.h>
int main()

{
	
	int num1,num2,num3;
	
	printf("\nEnter the value of num1,num2,num3");
	scanf("%d,%d,%d",&num1,&num2,&num3);
	
	if((num1>num2)&&(num1>num3))
	   printf("The num1 is greater number\n");
	   
	else if((num2>num1)&&(num2>num3))
	    printf("The number 2 is greater number\n");
	       
	else
	     printf("The number 3 is greater number\n");
	}