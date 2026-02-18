//9.program to reverse the given array

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr[5],n,i;
	printf("Enter element in array: ");
	*arr=(int*)malloc(5 * sizeof(int));
	for(i=0;i<=4;i++)
	{
	
		scanf("%d",&arr[i]);
	}
	printf("Element of reverse array: ");
	for(i=4;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	free(arr);
}
