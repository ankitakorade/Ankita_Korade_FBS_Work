//The class obtained(classI-above-60%, classII 60% to 70% ,pass class 40% to 50% and fail otherwise)

#include<stdio.h>
 int main()
{
   int p,c,m,t;
   float avg;
   
   printf("\nEnter the value of physics subject=");
   scanf("%d",&p);
   printf("\nEnter the value of chemistry subject=");
   scanf("%d",&c);
   printf("\nEnter the value of math subject=");
   scanf("%d",&m);
   
   t=p+c+m;
   printf("The total is=%d",t);
   avg=t/3;
   printf("The average is=%d",avg);
   
   if(avg>=60)
  b {
   	printf("The class first");
   }
   else if(avg>=60 && avg<70)
   {
     printf("The class is second");
   }
   else if(avg>=40 && avg<50)
    {
    	printf("The student calss is pass");
	}
	else
	{
	  printf("The student is fail");
	}
	}
	 
	
   
   
   
   
   