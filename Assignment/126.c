//6.accept array and print only prime number from array

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a[20],i,n,j,count=0;
	printf("How many element you have want: \n");
	scanf("%d",&n);
	*a[10]=(int*)malloc(10 * sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter element in array: \n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=2;j<a[i];j++)
	{
	  if(a[i] % j==0)
	{
		count++;
		break;
	}
   }
	if(count==0)
    	printf("The %d is prime: \n",a[i]);
  }
    free(a);
   }
