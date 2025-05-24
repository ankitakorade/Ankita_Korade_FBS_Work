// strcmp:user define function for compare two string

#include<stdio.h>
#include<string.h>
int comapreString(char*,char*);
int main()
{
   char str1[50],str2[50];
   printf("Enter string:");
   scanf("%s",str1);
   
   printf("Enter string:");
   scanf("%S",str2);
   
   int comp=compareString(str1,str2);
     printf("%d",comp);
}



int compareString(char *s1,char *s2)
{
	int i=0;
	while(s1[i] !='\0' && s2[i] !='\0')
	 {
	 	if(s1[i] !=s2[i])
	 	{
		  return 1;
	    }
	 i++;
    }

   if(s1[i]=='\0' && s2[i]=='\0')
   {
   	return 0;
   }
   else
    {
    	return -1;
	}
}

