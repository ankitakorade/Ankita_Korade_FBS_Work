//mystrcasecmp:perfoms a case_insensitive string comparison  similar to the standard strcasemp.

#include<stdio.h>
#include<string.h>
char toLower(char );
int mystrcasecmp(char*,char*);
voidmain()
{  char c;
	const char *str1="Hello";
	const char *str2="hello";
	toLower(c);
	
	int result=mystrcasecmp(str1,str2);
	if(result==0)
	 {
	 	printf("Strings are equal(case-insensitive)\n");
	 	
	 }
	 else
	 {
	 	printf("strings are not equal");
	 }
	
}

char toLower(char c)
{
	if(c>='A' && c<='z')
	 return c+('a'-'A');
	 return c;
}
int mystrcasecmp(char *s1,const char *s2)
{
	while(*s1 && *s2)
	{
	
	 char c1=toLower(*s1);
	 char c2=toLower(*s2);
	
	 if(c1!=c2)
	  retun c1-c2;
	  
	  s1++;
	  s2++;
    }
return toLower(*s1)-toLwer(*s2);
}