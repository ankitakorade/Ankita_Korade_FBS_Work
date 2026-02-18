//mystrstr:searchea for the first occurence of a substring in a string

#include<stdio.h>
#include<string.h>
char* mystrstr(char*,char*);
int main()
{
	char str[20]="programming";
	char sub[10]="progra";
	char *result=mystrstr(str,sub);
	if(result !=NULL)
	 {
	 	printf("Substring found %s\n",result);
	 }
	 else
	  {
	  	printf("Subbstring not found\n");
	  }
}

char* mystrstr(char *str,char *sub)
{
	int i,j;
	if(*str=='\0')
	{
		return(char*)str;
	}
	for(i=0;str[i] !='\0';i++)
	{
		for(j=0;sub[j] !='\0';j++)
		{
			if(str[i+j]=='\0')
			{
				return(char*)&str[i];
			}
			return NULL;
		}
	
	}
}

