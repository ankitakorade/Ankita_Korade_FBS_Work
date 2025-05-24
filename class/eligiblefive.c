//program to check eligible or not
#include<stdio.h>
 void checkeligibility();
 int age,male_age,female_age;
 void  main()
 {
 	
 	void checkeligibility();
 	printf("Enter the male_age=");
 	scanf("%d",&male_age);
 	
 	printf("Ener the female_age=");
 	scanf("%d",&female_age);
 }
 void checkeligibility()
 {
 
 	if(male_age>=21 && female_age>=18)
 	   printf("The person is eligible for marriage\n");
	  else
	   	printf("Sorry the person is not eligible to marriage");
	   
 }