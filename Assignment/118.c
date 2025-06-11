//8.WAP to calculate the number of words present in a string in c

#include<stdio.h>
int main()
{
	char str[40];
	int i=0,wordCount=0,inWord=0;
	
	printf("enter the string:\n");
	scanf("%s",str);
	
	while(str[i] !='\0')
	{
		if(!isspace(str[i]&& inWord==0))
		{
			inWord=1;
			wordCount++;
		}
		else if(isspace(str[i]))
		{
			inWord=0;
		}
		i++;
	}
	printf("number of words:%d\n",wordCount);
}