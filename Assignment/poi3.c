//program to print sum of number in the given range

#include<stdio.h>
void calculateSum(int*,int*,int*);
void main()
{
	int n,i,start,end,*sum=0;
	printf("enter start range= ");
	scanf("%d",&start);
	printf("Enetr end range= ");
	scanf("%d",&end);
	calculateSum(&start,&end,&sum);
	printf("The sum is %d to %d is : %d\n",start,end,sum);
  	 
	
}

void calculateSum(int *start,int *end,int *sum)
{
	int i;
  for(i=*start;i<=*end;i++)
  {
  	 *sum+=i;
  	 
	
  	 
	  }	
}