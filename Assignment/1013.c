//mystrncat:concatenates a specific number of characters from one string to another

#include<stdio.h>
char* myStrncat(char*,char*,int);
int main()
{
	char dest[50]="hello";
	char* src="world!";
	int n=3;
	
	myStrncat(dest,src,n);
	printf("resulting string %s\n",dest);
}

char* myStrncat(char *dest,char *src,int n)
{
  char* ptr=dest;
  
  while(*ptr !='\0')
  {
  	ptr++;
	  }	
	  while(n-- && *src !='\0')
	  {
	  	ptr++;
	  }
	  while(n--&&*src !='\0')
	  {
	  	*ptr++ = *src++;
	  }
	  *ptr='\0';
	  return dest;
}