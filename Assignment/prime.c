//Check number is prime or not

#include<stdio.h>
int main()
{
	int i=2,num=10,n,flag=0;
	printf("Enter number which you want=");
	scanf("%d",&n);
	
	while(i<num)
	{
		if(n%i==0)
		  flag=1;
		  printf("The number is not prime\n");
		  break;
		
    }
	i++;
	if(flag==0)
	{
		printf("The number is prime");
	}
	
}
	/* else
	 {
	   printf("The numbebr is not prime");
	 }
	 }*/
