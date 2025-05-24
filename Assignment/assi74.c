//program to find odd and even number in array

#include<stdio.h>
int main()
{
	int a[20],i,n,e=0,o=0;
	printf("How many element you have want= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  
	    printf("Enter value:\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	if(a[i]%2==0)
	 {
	 	e=e+a[i];
	 	printf("The number is even:%d\n",a[i]);
	 	
	 }
	 else
	  {
	  	o=o+a[i];
	  	printf("The number is odd:\n",a[i]);
	  }
	  printf("The sum of the even number in array is:%d\n",e);
	  printf("The sum of the odd number in array is:%d\n",o);
}