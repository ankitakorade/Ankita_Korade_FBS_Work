//mystrncpy:copies a specified number of character from one string to another.

#include<stdio.h>
#include<string.h>
char* mystrncpy(char*,char*,int);
int main()
{
   char src[]="Hello";
   char dest[10]; 
   mystrncpy(dest,src,10);
   printf("The copied string is:%s\n",dest);

}

char* mystrncpy(char *dest,char *src,int a)
{
   for(int i=0;i<a && src[i]!=0;i++)
    {
    	dest[i]=src[i];
    	
	}
	for(int i=0;i<a;i++)
	 {
	 	dest[i]='\0';
	 }	
	 return dest;
}