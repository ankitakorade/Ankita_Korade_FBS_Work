//program to printf prime number

#include<stdio.h>
int main()
{
	int n,i,temp,flag=0;
	int num=20;
	//printf("Enter number which you want= ");
	//scanf("%d",&num);
	temp=num;
    
	for(i=2;i<=20;i++)
    {       
     		if(i%2==0)
     		flag==1;
     		 printf("The number is not prime=%d \n",i);
     		 break;
     		
		 }
		 if(flag==0)
		   printf("The %d number is prime\n");
		   
	 }
 
