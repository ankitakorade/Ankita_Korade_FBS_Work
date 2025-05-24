//to check number is prime or not using while loop

#include<stdio.h>
int main()
{

int no=10;int i=2,flag=0;
while(i<no)
{
	if(no%i==0)
	 flag=1;
	 printf("The number is not prime");
	 break;
	
}
 i++;
if(flag==0)
  {
  	printf("The number is prime number");
  }

}