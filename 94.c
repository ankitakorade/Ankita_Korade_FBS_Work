//strcmp

#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]={"Hi Firstbit"};
	char str2[]={"Solution"};
	strcmp(str1,str2);
	
	if(str1>str2)
	{
	  printf("The string one is greater than string second\n");
       }
	else if(str1<str2)
	{
	  printf("The string one is less than string two\n");
      }
    else
     {
        printf("The both string are equal");	
	}
	
}