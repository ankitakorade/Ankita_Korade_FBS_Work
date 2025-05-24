//Check  the given number is even or odd

#include<stdio.h>
int isprime();
int main()
  {
    int prime;
	prime=isprime();
	printf(" %d",prime);
	
    }
    int isprime()
    {
      int num;
      printf("Enter number which you want=");
	   scanf("%d",&num);
	
	   if(num%2==0)
	    return 1;
	   else
	    return 0;
     }
