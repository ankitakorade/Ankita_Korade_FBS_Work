//Accepting two numbers and performing desired operation

#include<stdio.h>
 int main()
 {
 	int n1,n2,sum,sub,mul,mod;
 	printf("Enter the numbers which you want=");
 	scanf("%d,%d",&n1,&n2);
 	
 	if(n1>=n2)
 	  {
 	 	sum=n1+n2;
 	 	printf("The sum of the numer is=%d",sum);
	  }
	  else if(n1<=n2)
	   {
	   	sub=n1-n2;
	   	printf("The substraction is=%d",sub);
	   }
	    else if(n1==n2)
	    {
	      mul=n1*n2;
	      printf("The multiplication is=%d",mul);
	      
		}
		else
		 {
		   mod=n1%n2;
		   printf("%d",mod);
		 }
		 }
	  

 