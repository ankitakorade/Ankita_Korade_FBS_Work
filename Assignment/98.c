//strchr: searches for the first occurence of a specific character in a string.

#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="development";
	char *ptr=strchr(str,'e');
	if(ptr)
	{
		printf("First 'e' found at position:%d\n",ptr-str);
	}
}