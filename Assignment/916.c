//memcmp:compares two locks of bmemory byte by byte for a specified size

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Firstbit";
	char str2[]="Solution";
	if(memcmp(str1,str2,3)==0)
	   {
	   	printf("Memorty blocks are equal\n");
	   }
	else
	  {
	  	printf("Two blocks are not equal");
	  }
	   return 0;
}