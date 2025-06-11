//strrchr:searches for the last occurence of a character in a string

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="firstbit";
	char *ptr=strrchr(str1,'e');
	if(str1)
	   printf("Last occurence of 't' found at position:%d\n",ptr-str1);
	   return 0;
}