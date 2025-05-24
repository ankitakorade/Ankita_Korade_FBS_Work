//mystrlower

#include<stdio.h>
#include<string.h>
 void mystrlower(char*);
int main()
{
   char str[20]="PRoGRAMMINg";
   mystrlower(str);
   printf("The lower string is:%s",str);	
}

void mystrlower(char *str)
{
	int i=0;
	while(str[i] !='\0')
	 {
	 	if(str[i]>='A' && str[i]<='Z')
	 	 {
	 	 	str[i]=str[i]+('a'-'A');
		  }
		  i++;
	 }
}