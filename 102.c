//user define function for strlen

#include<stdio.h>
#include<string.h>
int calculateLength(char*);
int main()
{
	char str[10]="Firstbit";
	int length=calculateLength(str);
	printf("The string length is:%d\n",length);
	
}

int calculateLength(char* s1)
{

   int i=0,count=0;
	
	while(s1[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}