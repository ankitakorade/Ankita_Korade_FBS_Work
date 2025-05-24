//strncat:concatenates a specified number of characters from one string to another

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="Good";
	char str2[]="Student";
	strncat(str1,str2,4);
	printf("The concatenation string is %s\n",str1);
	return 0;
}