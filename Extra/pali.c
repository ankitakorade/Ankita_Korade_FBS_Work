//program to check palindrome number

#include<stdio.h>
int main()
{
	int n,c,sum=0,rem;
	printf("Enter number= ");
	scanf("%d",&n);
	c=n;
	while(n>0)   
	{
		rem=n%10;
		sum=rem+(sum*10);
		n=n/10;
	}
	if(sum==c)
	  {
	  	printf("The numer is palindrome\n");
	  	
	  }
	else
	  {
	  	printf("The number is not palindrome number\n");	 
		   }
         }