// toupper:
#include<stdio.h>
#include<string.h>
int main()
{
	char ch='b';
	printf("Before conversion %c\n",ch);
	
	ch=toupper(ch);
	printf("After conversion:%c\n",ch);
	
}
{

	char ch='B';
	printf("Before conversion %c\n",ch);
	
	ch=tolower(ch);
	printf("After conversion:%c\n",ch);
	
}