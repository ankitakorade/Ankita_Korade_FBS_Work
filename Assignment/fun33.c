//Calculate the sum of the given range using function

#include <stdio.h>
int sum();
int main()
{
	int s;
	s=sum();
	printf("%d",s);
	 }
  
 int sum()
  {
  
   int i,n,sum=0;
   printf("Enter number");
   scanf("%d",&n);
  
   for(i=1;i<=n;i++)
  {
  	sum=sum+i;
    return sum;

  }
}