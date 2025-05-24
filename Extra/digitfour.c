#include<stdio.h>
 int main()
  {
  	
  	int num1,num2,num3,n1,n2,n3,n4,num=9374,add;
  	 
  	 n1=num/1000;
  	 num1=num%1000;
  	 n2=num1/100;
  	 num2=num1%100;
  	 n3=num2/10;
  	 num3=num2%10;
  	 n4=num3/1;
  	 
  	 
  	 add=n1+n2+n3+n4;
  	 printf("The addition is %d,%d,%d,%d",add);  	 
  	 
  	 
  	 
  }