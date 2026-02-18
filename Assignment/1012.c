//myStrnstr:this function searches first occurence o a substring within the first n characater

#include<stdio.h>
char* myStrnstr(char*,char*,int);
int main()
{
	char* text="hello,world";
	char* search="world";
	int n=12;
	char* result=myStrnstr(text,search,n);
	
	if(result!=NULL)
	{
		printf("Substring found:\%s\"\n",result);
	}
	else
	{
		printf("substring not found within the first %zu characters.\n",n);
	}
}

char* myStrnstr(char *str1,char *str2,int n)
{
  int i,j;
  
  if(str2=='\0')
  {
  	return(char*)str1;
	  }	
	  for(i=0;i<n && str1[i] !='\0';i++)
	  {
	  	for(j=0;(i+j)<n && str2[j] !='\0';i++)
	  	{
	  		if(str1[i+j]!=str1[j])
	  		{
	  			break;
			  }
		  }
		  if(str2[j]=='\0')
		  {
		  	return(char*)(str1+i);
		  }
	  }
}