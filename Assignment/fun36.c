
//program to print perfect number using function
#include<stdio.h>
int isperfect();
int main()
 { 
   int s;
  isperfect();
  s=isperfect();
  printf("%d",s);	
 }
int isperfect()
 {
     int i=1,sum=0,num;
	printf("Enter number which you want= ");
	scanf("%d",&num);
	 
	 for(i=1;i<num;i++)
     {
	   if(num%i==0)
	    sum+=i;
	
     }
      if(sum==num)
       return 1;
     else
      return 0;
      }


