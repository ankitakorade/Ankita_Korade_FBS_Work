//program for armstrong number

#include<stdio.h>
int main()
{
	int no=123,sum=0,rem;
	while(no>0)
	{
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
		printf("The sum of the digit is=%d",sum);
		
	}
}