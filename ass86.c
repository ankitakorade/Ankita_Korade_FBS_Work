//program to print prime number in array usinng pointer

#include<stdio.h>
void isPrime(int*,int);
int main()
{
	int a[10],n;
	printf("How many element you want:\n");
	scanf("%d",&n);
	printf("Enter element:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	isPrime(a,n);
}

void isPrime(int *a,int n)
{ 
    int flag=1;
    for(int i=0;i<n;i++)
    {
	   if(a[i]%2==0)
	 {
	 	flag=0;
	   printf("The %d is not prime\n",a[i]);
	 }
    if(flag==1)
	{
		printf("The %d is prime number\n",a[i]);
	}
}
}