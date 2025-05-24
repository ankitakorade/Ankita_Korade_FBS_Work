//To display multiplication tale of given number

#include<stdio.h>
int main()
{
	int num,i=1;
	printf("Enter number which you want=");
	scanf("%d",&num);
	while(i<=10)
	{
		printf("The multiplication of table is %d*%d=%d\n",num,i,num*i);
		i++;
	}
}