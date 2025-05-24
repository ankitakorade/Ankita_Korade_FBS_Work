//strerror:converts an error code(typically error)into a uman-readable string message.

#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE *f=fopen("nonexistent.txt","r");
	if(!f)
	{
		printf("Error:%s\n",strerror(errno));
	}
	return 0;
}