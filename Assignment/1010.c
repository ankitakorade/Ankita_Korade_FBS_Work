//myStrchr: which searches for the first occurence of a character in a string.

#include<stdio.h>
#include<string.h>
char* myStrchr(const char*,char);
int main()
{
	const char* str="Firstbit solution";
	char search='s';
	
	
	
	char *result=myStrchr(str,search);
	   if(result!=NULL)
	     {
	     	printf("Character '%c' found at position:%ld\n",search,result-str);
	     	
		 }
		 else
		  {
		  	printf("Character '%c' not found\n,search");
		  }
		  return 0;
}

char* myStrchr(const char *str,char search)
{
	while(str !='\0')
	{
		if(str==search)
		{
			return(char*)str;
		}
		str++;
	}
	if(search=='\0')
	{
		return(char*)str;
	}
	return NULL;
}