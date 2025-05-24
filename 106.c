//mystrupper

#include<stdio.h>
#include<string.h>
void mystrupper(char*);
int main()
{
   char str[20]="hello ,student";
   mystrupper(str);
   
   printf("Uppercase string :%s\n",str);	
}

void mystrupper(char *str)
{
   int i=0;
   while(str[i] !='\0')
     {
     	if(str[i]>='a' && str[i]<='z')
     	{
     		str[i]=str[i]-('a'-'A');
		 }
		 i++;
		 }	
}