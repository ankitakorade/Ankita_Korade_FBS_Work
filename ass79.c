//9.program to reverse the given array

#include<stdio.h>
int main()
{
	int arr[5],n,i;
	printf("Enter element in array: ");
	for(i=0;i<=4;i++)
	{
	
		scanf("%d",&arr[i]);
	}
	printf("Element of reverse array: ");
	for(i=4;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
