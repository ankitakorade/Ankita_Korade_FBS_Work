//Finding F from C.

#include<stdio.h>
 float calculate();
 void main()
 {
 	  float s;
 	  calculate();
 	  s=calculate();
 	  printf("%f",s);
}

float calculate()
	  {
	  	   float F,C;
	  	   
	       printf("Enter the value of Farnite=");
 	       scanf("%f",&F);
            
	  		C=(F-32)*5.0/9.0;
	  		return C;
	  }