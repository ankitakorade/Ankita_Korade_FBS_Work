//2.WAP Replace all OCCurence of'a' with $ in a string.

#include<stdio.h>
#include<ctype.h>
int main()
{
	 int i;
	 char s[30],c1,c2;
	 printf("Eneter the string=\n");
	 gets(s);
	 
	 printf("Enter character replace=\n");
	 c1=getchar();
	 
	 printf("Enetr character which you want to replace with=%c");
	 c2=getchar;
	 
	 
	 for(i=0;s[i]!='\0';i++)
	 {
	 	if(s[i]==c1)
	 	{
	 		s[i]=c2;
		 }
		
	 }
	  printf("\n After replace=%s",s);
	
}