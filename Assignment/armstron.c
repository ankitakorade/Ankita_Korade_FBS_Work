//Check the number is armstrong or not

#include<stdio.h>
int main()
{
	int i,no,num,sum,rem;
	printf("Enter number which you want=");
	scanf("%d",&num);
	
	while(i>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
		printf("The sum of the number is=%d\n",sum);
		break;
		
	}
	i++;
	if(num==sum)
	  { 
	    printf("The number is armstrong number");
	  }
	  else
	    {
		  printf("The number is not armstrong number");
		}
		}
	  
