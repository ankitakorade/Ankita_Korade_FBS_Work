//program to find factorial of number

#include<stdio.h>
int calculateFactorial(int*);
int main()
{
	int num;
	printf("Enter numer which you want: ");
	scanf("%d",&num);
	int *s=calculateFactorial(&num);
	printf("The factorial of %d is= %llu",*s);
}
int calculateFactorial(int* n)
{
	int fact=1;
	for(int i=1;i<= *n;i++)
	{
	  fact=fact*i;	
	}
	return fact;
}