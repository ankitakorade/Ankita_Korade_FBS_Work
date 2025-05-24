//program to print sum of all number in array 

#include<stdio.h>
int main()
{
	int a[5],i,n,sum=0;
	printf("Enter element in array: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sum of array element is: \n");
	for(i=0;i,i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of element is= %d",sum);
}