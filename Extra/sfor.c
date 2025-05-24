//program to print strong nubmber

#include<stdio.h>
int main()
{
	int n,rem,temp,i,result=0,fact=1;
	printf("Enter number=");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		for(i=1;i<rem;i++)
		{
			fact=fact*i;
		}
		result= result+fact;
		fact=1;
		n=n/10;
        }
   if(temp==result)
       {
          printf("The is strong number");
         }
      else
        {
		  printf("The number is not strong");
		}
		}
      