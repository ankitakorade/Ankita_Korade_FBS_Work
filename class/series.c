//program to print number of series

#include<stdio.h>
int main()
{
	int i=1,n,num,temp=0,sum=0,count=0;
	printf("Enetr number which you want= ");
	scanf("%d",&num);
	
	while(i<=num)
	{
	    temp=temp*10+3;
	    printf("The series of number is= %d\n",temp);
	    count++;
	    printf("%d",count);
	    if(i<num)
	     {
		 	printf("\n");
		
		 }
		 i++;
	    
	  }
	
    }