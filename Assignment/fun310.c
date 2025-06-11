//Add the(first and last)digit of a given number

#include<stdio.h>
void sum();
int main()
{
	sum();
	
 } 
 void sum()
 {
	int num,sum,firstdigit,lastdigit;
	
	printf("Enter an integer:");
	scanf("%d",&num);
	lastdigit=num%10;
	firstdigit=num;
	
	while(firstdigit>=10)
	   {
		firstdigit/=10;
	     }
		sum=firstdigit+lastdigit;
		printf("Sum of the first and last digit is=%d",sum);
		return 0;
	}
