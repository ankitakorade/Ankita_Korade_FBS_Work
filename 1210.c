<<<<<<< HEAD
//10.program to sort the array

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr[10],n,i,j,temp;
	printf("Enter element in array: ");
	*arr=(int*)malloc(10 * sizeof(int));
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	printf("Print sort array :");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	free(arr);
=======
//10.program to sort the array

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr[10],n,i,j,temp;
	printf("Enter element in array: ");
	*arr=(int*)malloc(10 * sizeof(int));
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	printf("Print sort array :");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	free(arr);
>>>>>>> 6a82df13945791b2c097598d6f2f13fa7ca2a4bf
}