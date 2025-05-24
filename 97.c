//strncp:Work like strcmp(),but bonly compares the first n characters.

#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="programming";
	char str2[]="program";
	if(strncmp(str1,str2,7)==0)
	  {
	  	printf("First 7 chracters match\n");
	  }
	  else
	  {
	   printf("Dont match the character\n");
       }
	   
}