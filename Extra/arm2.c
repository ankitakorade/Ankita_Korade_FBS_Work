#include<stdio.h>
int main()
{
	int n,rem,r,sum=0,num;
	int i;
	printf("Enter the number= \n");
	scanf("%d ",&num);
	printf("Armstrong number are:\n");
	for(i=1;i<=num;i++)
  	  {
		sum=0;
		n=i;
	   while(n!=0)
		{
	     rem=n%10;
	     sum=sum+(rem*rem*rem);
	     n=n/10;	
       	}
       if(i==sum)
     	  {
	       printf("%d",i);
           }
            }
              return 0;
               } 