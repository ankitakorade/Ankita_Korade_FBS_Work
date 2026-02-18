//to check number is prime or not using function
#include<stdio.h>
int isPrime(int);
int main()
{
	int num;
	printf("Enter number= ");
	scanf("%d",&num);
	int s=isPrime(num);
	if(s==1)
	  printf("The numer is prime");
	else
	  printf("The number is not prime");
}
int isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
	   if(n%2==0)
	     return 0;
   	}
   	  return 1;
}