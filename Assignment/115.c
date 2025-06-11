//5.WAP to count the Number of Vowels in a string.

#include<stdio.h>
#include<string.h>
int countVowels(const char* str);
int main()
{
	char str[50];
	printf("enter a string:\n");
	scanf("%s",str);
	
	//remove newline character if present:
	str[strcsmpn(str,"\n")]='\0';
	
	int vowelCount=countVowels(str);
	printf("Number of vowels:%d\n",vowelCount);
}
int countVowels(const char* str)
{
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		char ch=tolower(str[i]);
		if(ch=='a'||ch=='e'||'i'||'o'||'u')
		{
			count++;
		}
	}
	return count;
}