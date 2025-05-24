//program to print prime number using function

#include<stdio.h>
void isPrime(int);
int main()
{   
    int n,num;
	printf("Enter number= \n");
	scanf("%d",&num);
	printf("The prime numbers 1 to %d\n",n);
	isPrime(num);
	
}
void isPrime(int n)
{
	for(int i=1;i<=n;i++)
	{
		int count=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d\t",i);
		}
	}
}
		