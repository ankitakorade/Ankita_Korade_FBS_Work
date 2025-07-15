#include<stdio.h>
 int main()
 {
 	
 	int num=2976538,n1,n2,n3,n4,n5,n6,n7,num1,num2,num3,num4,num5,num6,num7,add;
 	 
 	 n1=num/1000000;
 	 num1=num%1000000;
 	 n2=num1/100000;
 	 num2=num1%100000;
 	 n3=num2/10000;
 	 num3=num2%10000;
 	 n4=num3/1000;
 	 num4=num3%1000;
 	 n5=num4/100;
 	 num5=num4%100;
 	 n6=num5/10;
 	 num6=num5%10;
 	 n7=num6/1;
 	 
 	 add=n1+n2+n3+n4+n5+n6+n7;
 	 
 	 
 	 printf("The addition of the digit is %d,%d,%d,%d,%d,%d,%d",add);
 	 
 	 
 	 
 	 
 }