//2.program to print search the given number in array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,search,flag=1;
	int *arr[10]={11,33,55,67,78,23,12,23,45,67};
	arr[10]=(int*)malloc(10*sizeof(int));
	printf("Enter number to search: ");
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if(arr[i] == search)
		{
			flag==1;
			break;
		}
	}
	if(flag==1)
	{
		printf("The number is found at position: ",search);
		printf("%d",i);
	}
	else
	{
		printf("Number is not found:");
	}
	//free array memmory
	free(arr);
	
}