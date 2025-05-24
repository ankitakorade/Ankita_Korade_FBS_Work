//myStrncmp:this function compares the first n characters of two strings 

#include<stdio.h>
#include<string.h>
int myStrncmp(char*,char*);
int main()
{

   char* s1="hello";
   char* s2="hello";
   int result= myStrncmp(s1,s2,3);
   
   if(result==0)
   {
   	printf("first three characters are equal\n");
   }
   else if(result>0)
   {
   	printf("First string is greater\n");
   }
   else
   {
   	printf("Second string is greater\n");
   }

}

int myStrncmp(char *str1,char *str2,int size)
{
	while(size>0 && *str1 && *str2)
	{
		if(*str1 !=*str2)
		{
			return(unsigned char)
			(*str1)-(unsigned char)(*str2);
		}
		str1++;
		str2++;
		size--;
	}
	if(size>0)
	{
		return(unsigned char)(*str1)-(unsigned char)(*str2);
	}
	return 0;
}
