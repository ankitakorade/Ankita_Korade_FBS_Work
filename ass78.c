//8.program to merge two array

#include<stdio.h>
int main()
{
	int arr1[10],arr2[5],arr3[15],n,i,j=0;
	printf("Enter first array: ");
	for(i=0;i<10;i++)
	{
		
		scanf("%d",&arr1[i]);
	}
	printf("Enter second array: \n");
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&arr2[i]);
	}
	//copy array
	for(i=0;i<10;i++)
	{
		arr3[j]=arr1[i];
		j++;
	}
	for(i=0;i<5;i++)
	{
		arr3[j]=arr2[i];
		j++;
	}
	printf("Element of array: ");
	for(i=0;i<15;i++)
	{
		printf("%d",arr3[i]);
	}
}