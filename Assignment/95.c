//strncpy

#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]=("student");
	char str2[20];
	strncpy(str2,str1,2);
	str2[2]='\0';
	printf("The copy string is %s \n",str2);
	return 0;
}