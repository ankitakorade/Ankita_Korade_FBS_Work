//Check number is palindrome or not

#include<stdio.h>
int ispalindrome();
int main()
{
	ispalindrome();
 }
 int ispalindrome()
 {
	int num,reverseno=0,remainder,originalno;
	printf("Enter an integer:");
	scanf("%d",&num);
	
	originalno=num;
	while(num!=0)
	{
		remainder=num%10;
		reverseno=reverseno*10+remainder;
		num/=10;
	}
	if(originalno == reverseno)
	   { 
	     return 1;
       }
     else
	{
	   return 0;
     }
  }