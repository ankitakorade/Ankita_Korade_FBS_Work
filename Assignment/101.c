//user define function for strcpy()

#include<stdio.h>
#include<string.h>
void myStrcpy(char*,char*);
int main()
{
  char str1[10];
  char str2[20];
  printf("Enter string 1:");
  scanf("%s\n",str1);
  printf("String 1:%s\n String 2:%s\n",str1,str2);
  myStrcpy(str1,str2);
  
   	
}

void myStrcpy(char* s1, char* s2)
{
	int i=0;
  while(s2[i]!='\0')
  {
  	s1[i]=s2[i];
  	i++;
  }	
 s1[i]='\0';
}