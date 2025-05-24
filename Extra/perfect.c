//program to check number is perfect or not

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Entr number=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		 {
		 	sum=sum+i;
		 }
		 if(sum==n)
	      {
	   	 printf("The number %d is perfect number\n");
	      }
	    else
	      {
	   	 printf("The number %d is not perfect number\n");
	     }

          }
            }