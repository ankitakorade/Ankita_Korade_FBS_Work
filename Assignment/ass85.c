//program to print alternate number in array with pointer

#include<stdio.h>
void calculateSum(int*,int);
int main()
{
	int a[10],i,n;
	printf("How many elements you have want= \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element in array: \n");
		scanf("%d",&a[i]);
	}
	 calculateSum(a,10);
}

void calculateSum(int *a,int n)
	{
	for(int i=0;i<n;i=i+2)
	{
		printf("The alternate number in array is: %d\n",a[i]);
	}
}