//inding area and perimeter of rectangle and circle

#include<stdio.h>
 
 void calculateperi();
 void calculatearea();
 
 void main()
 {
 	
 	calculateperi();
 	calculatearea();
 	
 }
 	void calculateperi()
 	{
 		int l,b,peri;
 		printf("\nEnter the value of l=");
     	scanf("%d",&l);
 	    printf("\nEnter the value of b=");
 	    scanf("%d",&b);
 		peri=2*(l+b);
 	   printf("\nThe perimeter of rectangle is= %d",peri);
 	 
     }
      void  calculatearea()
     {
     	int l,b,area;
       area=l*b;
       printf("\nThe area of rectangle is= %d",area);
 	   
	 }
			
 	 