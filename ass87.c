//merge two array

#include<stdio.h>
void calculateSum(int*,int*,int*,int,int,int);
void main()
{
	int arr1[10],arr2[5],arr3[15];
	printf("Enter element in array:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter element in array:\n");
	for(int i=0;i<5;i++)
	{
	  scanf("%d",&arr2[i]);	
	}
	calculateSum(arr1,arr2,arr3,10,5,15);

}

void calculateSum(int *arr1,int *arr2,int *arr3,int a,int b,int c )
{
	int j=0;
   for(int i=0;i<a;i++)
   {
   	  arr3[j]=arr1[i];
   	    j++;
   }
   for(int i=0;i<b;i++)
   {
   	arr3[j]=arr2[i];
   	  j++;
	}
	printf("The element of array ");
	for(int i=0;i<c;i++)
	 {
	 	printf("%d",arr3[i]);
	}	
}