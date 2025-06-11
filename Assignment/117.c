//7.

#include<stdio.h>
int main()
{
	char str[50],result[40];
	int i,j=0;
	
	printf("Enter a string:\n");
	scanf("%s",str);
	
	//loop through and copy only even-indexed characters
	for(i=0;str[i] !='\0';i++)
	{
		if(i%2==0)
		{
			result[j++]=str[i];
		}
		}
		result[j]='\0';
		
		printf("String after removing characters at odd index:%s",result);	
}