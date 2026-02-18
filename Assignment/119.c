//9.WAP to Take in two Strings and Display The larger string without using Built-in Functions.

#include<stdio.h>
int main()
{
	char str1[30], str2[50];
	int i,len1=0,len2=0;
	
	printf("Enter first string:\n");
	scanf("%s",str1);
	printf("Enter second string:\n");
	scanf("%s",str2);
	
	//calculate the length of string
	for(i=0;str1[i] !='\0';i++)
	{
		if(str1[i]=='\n') break;
		len2++;
	}
	//compare and display the larger string
	if(len1>len2)
	{
		printf("Larger string :%s",str1);
	}
	else if(len2>len1)
	{
		printf("Larger string is: %s",str2);
	}
	else
	{
		printf("Both strings are of equallength.\n");
	}
}