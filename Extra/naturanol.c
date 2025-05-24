//Write a program in cto display first 10 natural natural numbers using while loop.

#include<stdio.h>
 int main()
 {
 	int i,sum=0;
 	while(i<=10)
 	{
	 
 	printf(" The first ten natural number is=%d\n",i);
 	sum=sum+i;
 	printf("The sumof the number is=%d",sum);
 	i++;
    }
 }