//3.program to find sum off all numbers in array using pointer

#include<stdio.h>
#include<stdlib.h>
void sum(int*,int,int );
int main()
{   
    int size,result=0;
	int *arr[10]={1,2,3,4,5,6,7,8,9};
	arr[10]=(int*)malloc(10 * sizeof(int));
	sum(arr,10,result);
}
void sum(int *arr,int size,int result)
{
	for(int i=0;i<size;i++)
	{
		result=result+arr[i];
	   //	printf("The sum of all numbers is:%d\n",result);
	}
	printf("The sum of all numbers is:%d\n",result);
	free(arr);
}
