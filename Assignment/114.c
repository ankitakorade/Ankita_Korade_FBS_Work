//4.WAp to form a New string where the first Character and the Last character have been Exchanged;

#include<stdio.h>
#include<string.h>
void swapFirstAndLAst(str);
int main()
{
	char str[100];
	
	prntf("enter a string:");
	scanf("%s",str);
	//remove newline if present:
	str[strcspn(str,"\n")]='\0';
	
	swapFirstAndLast(str),
	
	printf("Modified string is:\n",str);
}

void swapFirstAndLAst(str)
{
	int len=strlen(str);
	
	if(len<2)
	{
		//no need to swap if the string as only 1 character:
		return;
	}
	char temp = str[0];
	str[0] = str[len-1];
	str[len-1] = temp;
}