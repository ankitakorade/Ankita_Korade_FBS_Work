//myStrnacasecmp:compares the first characters of two string in a case-insensitive manner

#include<stdio.h>
#include<ctype.h>
int myStrncasecmp(char*,char*,int);
int main()
{
  char* str1="Helloworld";
  char* str2="helloworld";
  int n=5;
  
  int result=myStrncasecmp(str1,str2,n);
  
  if(result==0)
  {
  	printf("First%zu characters are equal(case-insensitive).\n",n);
  }
  else if(result<0)
  {
  	printf("str1 is less than str2(case-insensitive)\n");
  }
  else
  {
  	printf("str1 is greater than str2(case-insensitive)\n");
  }
		
}

int myStrncasecmp(char* s1,char* s2,int n)
{
	unsigned char c1,c2;
	
	while(n-->0)
	{
		c1=(unsigned char)*s1++;
		c2=(unsigned char)*s2++;
		
		c1=tolower(c1);
		c2=tolower(c2);
		
		if(c1 !=c2)
		{
			return c1-c2;
		}
		if(c1=='\0')
		{
			break;
		}
	}
}

