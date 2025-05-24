//Built in function in string
//strlen

#include<stdio.h>
#include<string.h>
int main()
{   
	char str[]={"Hello"};
	int length=strlen(str);
	printf("The length of string is:%d\n",length);
}