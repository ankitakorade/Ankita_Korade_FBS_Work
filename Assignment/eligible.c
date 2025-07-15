//Check the person is eligible for marriage or not

#include<stdio.h>
 int main()
 {
 	int age,male_age,female_age;
 	
 	printf("Enter the male_age=");
 	scanf("%d",&male_age);
 	
 	printf("Ener the female_age=");
 	scanf("%d",&female_age);
 	
 	if(male_age>=21 && female_age>=18)
 	 {
 	 	printf("\nThe person is eligible for marriage");
 	 	
	  }
	  else
	   {
	   	printf("Sorry the person is not eligible to marriage");
	   }
 }