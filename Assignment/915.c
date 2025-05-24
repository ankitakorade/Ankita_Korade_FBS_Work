//memcpy: copies a specified number of bytes from source to destination

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="firstbit solution";
	char dest[10];
	memcpy(dest,str,strlen(str)+1);
	printf("Copies the byte:%s\n",dest);
	return 0;
}