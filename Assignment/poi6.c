//program to print number is perfect or not using pointer 
#include<stdio.h>
int isperfect(int*);
int main()
 { int num;
    printf("Enter number which you want= ");
	scanf("%d",&num);
   int *s;
  *s=isperfect(&num);
  printf("%d",*s);	
 }
int isperfect(int* n)
 {
     int i=1,sum=0;
	
	 
	 for(i=1;i< *n;i++)
     {
	   if(*n%i==0)
	    sum+=i;
	
     }
      if(sum==*n)
       return 1;
     else
      return 0;
      }


