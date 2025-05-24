<<<<<<< HEAD
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
=======
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
>>>>>>> 6a82df13945791b2c097598d6f2f13fa7ca2a4bf
}