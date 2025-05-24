//8.program to merge two array

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr1[10],*arr2[5],*arr3[15],n,i,j=0;
	*arr1=(int*)malloc(10 * sizeof(int));
	printf("Enter first array: ");
	for(i=0;i<10;i++)
	{
		
		scanf("%d",&arr1[i]);
	}
	*arr2=(int*)malloc(5 * sizeof(int));
	printf("Enter second array: \n");
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&arr2[i]);
	}
	//copy array
	 *arr3=(int*)malloc(15 * sizeof(int));
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
	free(arr1);
	free(arr2);
	free(arr3);
}