//memset:Fills a block of memory with a specific value

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	memset(str,'@',10);
	str[10]='\0';
	printf("After memset:%s\n",str);
	return 0;
}