//program to check given number is palindrome or not

#include<stdio.h>
int ispalindrome(int*);
int main()
 {
 	int num;
    printf("Enter an integer:");
	scanf("%d",&num);
   ispalindrome(&num);
}
int ispalindrome(int *no)
   {
   	 int reverseno=0,remainder;
	 int originalno=*no;
	 int temp=*no;
	while(no!=0)
	{
		remainder=temp%10;
		reverseno=reverseno*10+remainder;
		temp/=10;
	}
	if(originalno == reverseno)
	   {
	     printf("The %d is palindrome number\n",originalno);
       }
	else
	{
		printf("The %d is not palindrome numer\n",originalno);
	}
}
