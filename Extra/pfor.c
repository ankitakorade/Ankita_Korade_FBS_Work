#include<stdio.h>
int main()
{
	int num,i,j,sum;
	printf("Enter number=");
	scanf("%d",&num);
	printf("The perfect number between 1 and %d are: \n");
	for(i=1;i<=num;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
		  if(i%j==0)
		  {
		    sum=sum+j;
		  }
      	}
		  if(sum==i)
		     printf("The number is perfect numbe\nr");
		 	}
               	}
