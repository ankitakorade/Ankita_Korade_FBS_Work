//strcat

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]={"Hello"};
	char str2[]={"Student"};
	strcat(str1,str2);
	printf("%s",str1);
}