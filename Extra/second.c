#include<stdio.h>
 void main()
 {
 	
 	int num;
 	
 	 
    printf("Enter number which you want");
      scanf("%d",&num);

 if(num>0)
     printf("%d isThe number is positive\n",num);
     
 
 else if(num<0)
     printf("%dThe number is negative\n",num);
     
 else
      printf("Number is neither positive not a negative");   
	  }