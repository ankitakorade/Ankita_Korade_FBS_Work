//program to print mimnimum and maximum number in array using pointer

#include<stdio.h>
void findMinMax(int*, int,int*,int*);
void main() 
{
    int arr[10] = {23, 45, 12, 67, 34, 89, 2};
    int min, max,size;

    findMinMax(arr, size, &min, &max);

    //printf("Minimum number in the array is: %d\n", min);
    //printf("Maximum number in the array is: %d\n", max);
}

void findMinMax(int *arr, int size, int *min, int *max) 
{
    *min = *max = *arr;

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] < *min) 
		{
            *min = *(arr + i);
            printf("Minimum number in the array is: %d\n", *min);
        }
        
		if (arr[i]> *max) 
		{
            *max = *(arr + i);
             printf("Maximum number in the array is: %d\n", *max);
        }
    }
}

