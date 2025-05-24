//to print armstrong number using for loop
#include<stdio.h>
int main()
{
	int i,num,sum,rem,temp;
	printf("Enter number which you want=");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=num;i++)
	{
	
	while(i>0)
	{
		printf("The number is= %d",i);
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
		printf("The sum of the number is=%d\n",sum);
		break;
		
	}
    }
	if(sum==temp)
	  { 
	    printf("The %d is armstrong number");
	  }
	  else
	    {
		  printf("The number is not armstrong number");
		}
		}
	  
