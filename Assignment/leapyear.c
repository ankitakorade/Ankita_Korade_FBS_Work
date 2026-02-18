//Check the year is leap year or not

#include<stdio.h>
 int main()
 {
 	int year;
 	printf("Enter year which you want");
 	scanf("%d",&year);
 	
 	if(year%4==0)
 	  {
 	  	printf("The year is leap year");
	   }
	   else
	    {
	    	printf("The year is not leap year");
		}
 }