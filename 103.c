//strcat: concatenation of two string

#include<stdio.h>
#include<string.h>
void stringCat(char*,char*);
int main()
{
	char str1[10]="firstbit";
	printf("The string 1 is :%s",str1);
	
	char str2[20]="solution";
	printf("The string 2 is :%s",str2);
	
	int len1=strlen(str1);
	printf("The length of the string one is %d\n",len1);
	
	int len2=strlen(str2);
	printf("The length of the string two is %d\n",len2);
	
	stringCat(str1,str2);
	printf("After concatenation strings are\n");
	printf("String 1 is:%s \nstring 2 is:%s",str1,str2);
	
	
}

void stringCat(char *s1,char *s2)
{
	int len,i;
	len=len1(s1)+len2(s2);
	for(int i=0;i<=len2;i++)
	{
		s1[len1+i]=s2[i];
		
	}
	s1[len+1];
	
}