//built in function in c
 
#include<stdio.h>
#include<string.h>
int main()
{
	//strlen
	char str1[10]="Firstbit solutions";
	char str2[20]="solution";
	int len=strlen(str2);
	printf("%d",str1);
	
	//strrev
	strrev(str2);
	printf("%s",str2);
	
	
	
	//strstr
	char *sub= strstr(str1,"solution");
	if(sub)
	   {
	   	printf("Substring found at: %s\n",sub);
	   }
}
	

 