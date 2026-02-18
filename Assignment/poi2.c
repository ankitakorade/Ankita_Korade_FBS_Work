//program to print table for the given number using pointer

#include<stdio.h>
void calculateTable(int*);
int main()
{
   	int n;
   	printf("Enter number which you want=");
   	scanf("%d",&n);
   	calculateTable(&n);
}
void calculateTable(int *n)
{
	 int i,j;
	for(i=1;i<=*n;i++)
	{
		printf(" %d\n",i);
	}
	for(j=1;j<=10;j++)
	{
		printf("The table is %d*%d= %d\n",i,j,i*j);
	}

}