//Check number is perfect or not

#include<stdio.h>
int main()
{
	int i=1,sum=0,num;
	printf("Enter number which you want= ");
	scanf("%d",&num);
	 while(i<num)
     {
	   if(num%i==0)
	   sum+=i;
	}
     i++;
     if(sum==num)
      {
        printf("The %d is perfect number\n",num);
      }
     else
      {
 	     printf("The %d is not perfect number\n",num);
     }
     return 0;
      }


