//program to print perfect number using function

#include<stdio.h>
void isPrfect(int);
void main()
{
	
	int n,num;
	printf("Enter the number= ");
	scanf("%d",&num);
	printf("The perfect numbers 1 to %d\n",n);
	isPerfect(num);
	
}

void isPerfect(int n)
{
	int num,sum=0,i;
   for(int i=1;i<=n;i++)
	{  
	  int count=0; 
	   for(int j=1;i<=i;j++)
		{
			if(i%2==0)
			sum=sum+i;
			count++;
		}
		if(sum==num)
		   printf("\nperfect number are= %d\t",i);
	}
	
}


