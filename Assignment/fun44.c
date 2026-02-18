//program to check strong number int he given range using function

#include<stdio.h>
 int isStrongNumber(int);
 int getFactorial(int);
int main()
{   
    int num;
    printf("Enter number which you wnat= ");
    scanf("%d",&num);
    if(isStrongNumber(num))
    {
    	printf("YES");
    }
    else
    {
    	printf("NO");
	}
}

int isStrongNumber(int num)
{
	
  int rem,sum=0,temp=num;
  while(num)
  {
  	rem=num%10;
  	sum=sum+getFactorial(rem);
  	num/=10;
 }
   if(temp==sum)return 1;
  else return 0;	
}

int getFactorial(int num)
{
	int i,factorial=1;
	for(i=num;i>=1;i--)
	{
	  factorial=factorial*i;
   }
return factorial;
}
