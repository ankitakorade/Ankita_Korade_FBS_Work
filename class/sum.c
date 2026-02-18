<<<<<<< HEAD
//calculate the sumof digit of given number

#include<stdio.h>
int sumOfDigits(int num)
{
	int sum;
	while(num>0)
	{
		sum+=num%10;
		num/=10;
	}
	return sum;
}
int digitalRoot(int num)
{
	while(num>=10)
	{
		num=sumOfDigits(num);
		
	}
	return num;
}
int main()
{
	int number=7851;
	int sum=sumOfDigits(number);
	int finalSum=digitalRoot(number);
	
	printf("Sum Of digits of %d:%d\n",number,sum);
	printf("repeated sum until single digit: %d\n",finalSum);
	
	return 0;
=======
//calculate the sumof digit of given number

#include<stdio.h>
int sumOfDigits(int num)
{
	int sum;
	while(num>0)
	{
		sum+=num%10;
		num/=10;
	}
	return sum;
}
int digitalRoot(int num)
{
	while(num>=10)
	{
		num=sumOfDigits(num);
		
	}
	return num;
}
int main()
{
	int number=7851;
	int sum=sumOfDigits(number);
	int finalSum=digitalRoot(number);
	
	printf("Sum Of digits of %d:%d\n",number,sum);
	printf("repeated sum until single digit: %d\n",finalSum);
	
	return 0;
>>>>>>> 6a82df13945791b2c097598d6f2f13fa7ca2a4bf
}