//7.Take to array and add sum in third array

#include<stdio.h>
int main()
{
	int a[5],b[5],sum[5],n,i;
	printf("Enter first array: \n");
	for(i=0;i<5;i++)
	{
		printf("Enter element in array: \n");
		scanf("%d",&a[i]);
		
	}
	printf("Enter element in second array:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter an element\n");
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		sum[i]=a[i]+b[i];
		printf("%d",sum[i]);
	}
	
}