//program to take two array and add sum in tird array using pointer

#include<stdio.h>
void calculateSum(int*,int*,int*,int);
int main()
{
	int a[5],b[5],sum[5],n,i;
	printf("Enter first array: \n");
	for(int i=0;i<5;i++)
	{
		printf("Enter element in array: \n");
		scanf("%d",&a[i]);
		
	}
	printf("Enter element in second array:\n");
	for(int i=0;i<5;i++)
	{
		printf("Enter an element\n");
		scanf("%d",&b[i]);
	}
	calculateSum(a,b,sum,5);
	
	
}
	
void calculateSum(int *a,int *b,int *sum,int n)
{
	for(int i=0;i<n;i++)
	{
		sum[i]=a[i]+b[i];
		printf("%d",sum[i]);
	}
	
}