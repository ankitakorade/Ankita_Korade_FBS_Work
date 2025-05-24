//1.program to print minimum and maximum number in arry using pointer

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,size,i,max,min;
	printf("Enetr size of array:");
	scanf("%d",&size);
	printf("Enter element in array:");
	a=(int*)malloc(size * sizeof (int) );
	for(i=0;i<size;i++)
      {
        scanf("%d",&a[i]);
	  }
	  max=a[0];
	  for(i=0;i<size;i++)
	  {
	  	if(a[i]>max)
	  	{
	  		max=a[i];
		  }
    	}
		  printf("Maximum element of array: %d\n",max);
		min=a[0];
	
		for(i=0;i<size;i++)
		{
		   if(a[i]<min)
		   {
		   	min=a[i];
		   }
	}
		  printf("Minimum elemnt of array: %d\n",min);
		 //free allocated memory
	  free(a);
}

	