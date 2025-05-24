//1.Write a program to scan string from user then scan a single character and search it in a accepted string.

#include<stdio.h>
#include<string.h>
int main()
{
	int i,f=0;
	char str[20],n;
	printf("Enetr string which you wnant:\n");
	scanf("%s",str);
	
	printf("Enetr a character which you want to search:\n");
	scanf("%c",&n);
	
	for(i=0;str[i]!='\0';i++)
	  {
		if(str[i]==n)
		  {
		 	f=1;
		     break;	
		  }
	    }
		 if(f==1)
		 {
		 	printf("Character is present in string\n");
		 }
		 else
		  {
		  	printf("Character is not present in string\n");
		  }
		
		}
