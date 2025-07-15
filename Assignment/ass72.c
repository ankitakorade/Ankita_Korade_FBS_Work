//program to print search the given number in array
#include<stdio.h>
int main()
{
	int i,search,flag=1;
	int arr[10]={11,33,55,67,78,23,12,23,45,67};
	printf("Enter number to search: ");
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if(arr[i] == search)
		{
			flag==0;
			break;
		}
	}
	if(flag==1)
	{
		printf("The number is found at position: ",search);
		printf("%d",i);
	}
	
}