#include<stdio.h>
 int main()
 {
 	
 	int num=937,num1,num2,n1,n2,n3,res;
 	
 	n1=num/100;
 	num1=num%100;
 	n2=num1/10;
 	num2=num1%10;
 	n3=num2/1;
 	res=n1+n2+n3;
 	
 	printf("The addition is %d,%d,%d",res);
 	
 }