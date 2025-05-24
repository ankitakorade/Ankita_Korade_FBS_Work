//10.Write a program to check the given string is palindrome or not.

#include<stdio.h>
int main()
{
	char str[50];
	int i,len=0,isPalindrome=1;
	
	printf("Enter a string:\n");
	scanf("%s",str);
	
	for(i=0;str[i] !=0;i++)
	{
		if(str[i]=='\n') break;
		 len++;
	}
	for(i=0;i<len/2;i++)
	{
		if(str[i] !=str[len-1-i])
		{
			isPalindrome=0;
			break;
		}
	}
	if(isPalindrome)
	  {
	  	printf("The string is a palindrome\n");
	  }
	  else
	   {
	   	printf("The string is not palindrome:\n");
	   }
}