<<<<<<< HEAD
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
=======
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


>>>>>>> 6a82df13945791b2c097598d6f2f13fa7ca2a4bf
