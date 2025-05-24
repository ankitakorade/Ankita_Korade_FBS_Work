#include<stdio.h>
 int main()
 {
 	int a=10,c;
    int b=50;
    c=(a<=b);
	printf("%d",c);
	
	c=(a>b);
	printf("%d",c);
	
	c=10+20*3>13+4*5<=6>=20;
	printf("%d",c);
	
	c=10<3>20<=40>=50<6>7>1;
	printf("%d",c);	 
	
	c=printf("java")>printf("bit")+3+2*4>printf("c")&&10||0;
	printf("%d",c);
	
	}