//5.program to print alternate number in array

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a[10],i,n;
	printf("How many elements you have want= \n");
	scanf("%d",&n);
	 *a[10]=(int*)malloc(10 * sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter element in array: \n");
		scanf("%d",&a[i]);
	}
	printf("Altermate number in array: \n");
	for(i=0;i<n;i=i+2)
	{
		printf("The alternate number in array is: %d\n",a[i]);
    }
    free(a);
}