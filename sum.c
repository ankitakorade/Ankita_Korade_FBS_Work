//Calculate the sum of the given range

#include <stdio.h>
int main()
{
  int i=11,n=30,sum=0;
  
  while(i<=n)
  {
  	sum=sum+i;
  	printf("The sum of the number is=%d\n",sum);
  	i++;
  }
  return 0;
}