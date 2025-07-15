//6.replacing the white space with special character

#include<stdio.h>
int main()
{
	char str[50];
	int i;
	
	printf("Enter a string:\n");
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]='$';
		}
	}
	printf("The string after replacing space is:%s\n",str);
}