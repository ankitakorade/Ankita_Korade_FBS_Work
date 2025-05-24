//program to check number is primbe or not

#include<stdio.h>
#include<stdbool.h>
bool isPrime(int*);
int main()
{
    int n,i,num;
	printf("Enter number which you want: ");
	scanf("%d",&num);
	isPrime(&num);
	if(isPrime(&n))
	   printf("%d is a prime number\n",num);
	else
	   printf("%d is not a prime number\n",num);
	  
}
bool isPrime(int* n)
{
	if(*n<=1)
	  return false;
	for(int i=2;i<=*n/2;i++)
	{
	
  if(*n%i==0)	
      return false;
}
return true;
}