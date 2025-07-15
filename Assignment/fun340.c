//Add the(first and last)digit of a given number

#include<stdio.h>
int sum(int);
int main()
{   
    int n;
	int s=sum(n);
	printf("%d",s);
}
int sum(int num)
{

	int sum,firstdigit,lastdigit;
	
	printf("Enter an integer:");
	scanf("%d",&num);
	lastdigit=num%10;
	firstdigit=num;
	
	while(firstdigit>=10)
	   {
		firstdigit/=10;
	   }
		sum=firstdigit+lastdigit;
		return sum;
	}
