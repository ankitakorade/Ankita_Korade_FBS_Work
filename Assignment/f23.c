//Accepting two numbers and performing desired operation

#include<stdio.h>
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float divide(float a, float b);

int main()
{
	float num1,num2;
	//accept input from user
	printf("Enetr the value of num1= ");
	scanf("%f",&num1);
	printf("Enetr the value of num2= ");
	scanf("%f",&num2);
	
	//perform operations
	printf("The addition is= %.2f\n",add(num1,num2));
	printf("The substraction is= %.2f\n",sub(num1,num2));
	printf("The multiplication is= %.2f\n",mul(num1,num2));
	printf("The division is= %.2f\n",divide(num1,num2));
	}
	
	float add(float a,float b)
	{
		return a+b;
	}
	float sub(float a,float b)
	{
		return a-b;
	}
	float mul(float a,float b)
	{
		return a*b;
	}
	float divide(float a,float b)
	{
		return a/b;
	}
	
	