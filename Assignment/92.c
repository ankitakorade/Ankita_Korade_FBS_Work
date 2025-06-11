//strcpy: copy one string in to another string.

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]={"Ankita"};
	char str2[10];
    strcpy(str2,str1);
	printf("The copied string is: %s\n",str2);
	
	
}