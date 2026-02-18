//Add the(first and last)digit of a given number using pointer

#include<stdio.h>
int sum(int*);
int main()
{   
    int n;
    printf("Enter an integer:");
	scanf("%d",&n);
	int *s=sum(&n);
	printf("%d",*s);
}
int sum(int *num)
{

	int sum;
	int lastdigit=num%10;
	int firstdigit=num;
	
	while(firstdigit>=10)
	   {
		firstdigit/=10;
	   }
		sum=firstdigit+lastdigit;
		return sum;
	}
