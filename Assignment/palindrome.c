//Check number is palindrome or not

#include<stdio.h>
int main()
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
	   printf("%d is a palindrome\n",originalno);
       }
	else
	{
	   printf("%d is not a palindrome\n",originalno);
	   return 0;
     }
 }