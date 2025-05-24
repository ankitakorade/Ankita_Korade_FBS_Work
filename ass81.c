//program to find minimum and maximum number in array in pointer
#include<stdio.h>
void findMinMax(int*,int,int*,int*);
int main()
{
	int a[10],max,min;
	printf("Enter element in array:");
	for(int i=0;i<10;i++)
      {
        scanf("%d",&a[i]);
	  }
	findMinMax(a,10,&min,&max);
	printf("The maximum number of array is:%d",max);
	printf("The minimum number of array is:%d",min);
}
	
void findMinMax(int *a,int size,int *min,int *max)
{
	  *max=*min=a[0];
	  for(int i=0;i<size;i++)
	  {
	  	if(a[i]>*max)
	  	{
	  		*max=a[i];
	  		//printf("The maximum number of array is %d:",*max);
		  }
         if(a[i]<*min)
		   {
		   	*min=a[i];
		   }
			
	  }
}

	