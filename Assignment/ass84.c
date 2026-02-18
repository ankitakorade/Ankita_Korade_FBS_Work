//4.program to find even and odd number in array using pointer.

#include<stdio.h>
void calculateEvenOdd(int*,int,int,int);
void main()
{
	int arr[10],e=0,o=0,size;
   printf("Enetr element in array:");
  for(int i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
    }
  calculateEvenOdd(arr,10,e,o);
}

void calculateEvenOdd(int *arr,int size,int e,int o)
{
	for(int i=0;i<size;i++)
  if(arr[i]%2==0)
   {
   	  e=e+arr[i];
	 printf("The number is even:%d\n",arr[i]);
	}
	else
	{
		o=o+arr[i];
		printf("The number is odd number:%d\n",arr[i]);
	}
	printf("The sum of the even number is :%d\n",e);
	printf("The sum of the odd number is odd:%d\n",o);	
}

