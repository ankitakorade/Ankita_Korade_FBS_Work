//program for print the table of given number
#include<stdio.h>
int main()
{
	int i=1,num,n=10;
	printf("Enter number which you want=");
	scanf("%d",&num);
	
	while(i<=n)
	{
		printf("The multiplication table is %d*%d=%d\n",num,i,num*i);
		i++;
	}
}