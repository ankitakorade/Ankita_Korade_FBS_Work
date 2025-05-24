//Display the multiple table

#include<stdio.h>
 int main()
{
	int i,n,num,mul;
	printf("Enter the number which table you want=");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
	
		printf("%d*%d=%d\n",num,i,num*i);
	}
}