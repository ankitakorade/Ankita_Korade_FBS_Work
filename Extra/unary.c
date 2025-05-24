//Unary operator

#include<stdio.h>
 int main()
 {
 	int a=10;
 	printf("%d",a++);
	 
	 
	 a=10;
	int b=20,c=30,d=40;
	int x=a++ + --b +c++ + ++d;
	printf("%d",x);
	
	
	int y,e=5;
	a=10,b=3,d=4,c=15;
	a++ + --b + --c + d-- -e++;
	printf("%d",c);
	 
	 
	 x=a++ + --a + a-- + ++a;
	 printf("%d",x);
	 
	 
	  }