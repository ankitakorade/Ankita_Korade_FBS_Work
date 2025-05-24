//sum of digit using while lopp

#include<stdio.h>
 int main()
 {
 	int no=73581,rem,sum=0;
 	while(no>0)
 	{
 		rem=no%10;
 		sum=sum+rem;
 		no=no/10;
 		printf("The sum of the didgit is=%d\n",sum);
	 }
	 
 }
 