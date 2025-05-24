//program to search number in the array using pointer

#include<stdio.h>
void searchElement(int*,int,int*);
int main()
{
	int i,search,flag=1;
	int arr[10]={11,33,55,67,78,23,12,23,45,67};
	printf("Enter number to search: ");
	scanf("%d",&search);
	searchElement(arr,10,&search);
}

void searchElement(int *arr,int size,int *search)
{
	 int flag=0,i;
   //printf("Enter number to search: ");
	//scanf("%d",&search);
	for(int i=0;i<size;i++)
	{
		if(arr[i] == *search)
		{
			flag==0;
			break;
		}
	if(flag==1)
	{
		printf("The number is found at position:%d",search);
		printf("%d",i);
		
	}
}
}
	
