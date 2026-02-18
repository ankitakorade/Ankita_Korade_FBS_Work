//6.Check the person is eligible for marriage or not

#include<stdio.h>
 int is_eligible();
 int main()
    {
    	int eli;
 	  eli=is_eligible();
	  printf("%d",eli);
 	
    }
    int is_eligible()
    {
	  int male_age,female_age;
 	
 	  printf("Enter the male_age=");
 	  scanf("%d",&male_age);
 	
 	  printf("Ener the female_age=");
 	  scanf("%d",&female_age);
 	
 	if(male_age>=21 && female_age>=18)
 	   return 1;
	  else
	   return 0;
	   }