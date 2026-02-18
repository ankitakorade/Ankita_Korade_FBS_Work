//strstr:searches for the firdt occurence of a substring in a string

#include<stdio.h>
#include<string.h>
int main()
{
	char text[]="Hello firstbit solution";
	char *sub= strstr(text,"Hello");
	if(sub)
	   {
	   	printf("Substring found at: %s\n",sub);
	   }
}