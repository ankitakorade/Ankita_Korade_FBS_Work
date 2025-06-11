//strtok: splits a string into tokens based on a delimeter

#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Hi,i,am,ankita";
	char *token=strtok(str,",");
	
	while(token!='\0')
	  {
	  	printf("%s\n",token);
	  	token=strtok('\0',",");
	  }
	  return 0;
}