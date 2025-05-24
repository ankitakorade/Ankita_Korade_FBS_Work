//program for find sum of first 10 natural numbers

#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("The  natural number is=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		printf("%d",i);
	}
	printf("\nThe sum of the naturalnumber is= %d",sum);

}