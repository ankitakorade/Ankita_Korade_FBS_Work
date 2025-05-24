//3.WAP to Remove the nth index Character from a Non-Empty String.

#include<stdio.h>
#include<string.h>
void removeCharAtIndex(char* str,int index);
int main()
{
	char str[50];
	int index;
	
	printf("Enter a string;\n");
	scanf("%s",str);
	
	str[strcspn(str,"\n")]='\0';
	
	printf("Enter the index tp remove:");
	scanf("%d",&index);
	
	removeCharAtIndex(str,index);
	
	printf("String after remove %s\n",str);
}

void removeCharAtIndex(char* str,int index)
{
	 int len=strlen(str);
	 if(index<0 || index>=len)
	 {
	 	printf("Index out of range\n");
	 }
	 for(int i=index;i<len-1;i++)
	 {
	 	str[i]=str[i+1];
	 }
	 str[len-1]='\0';
}