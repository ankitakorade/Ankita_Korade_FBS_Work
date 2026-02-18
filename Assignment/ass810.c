//program to sort the array using pointer

#include<stdio.h>
void sortArray(int*,int);
int main()
{
	int arr[10],n,i,j;
	printf("Enter element in array: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	sortArray(arr,10);
}

void sortArray(int *arr,int n)
{

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	printf("Print sort array :");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}