//strdup: allocates memory and create a duplicate of the given string.

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="C programming";
	char *dubli=strdup(str1);
	printf("Copied String:%s\n",dubli);
	free(dubli);
}