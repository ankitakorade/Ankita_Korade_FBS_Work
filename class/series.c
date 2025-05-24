<<<<<<< HEAD
//program to print number of series

#include<stdio.h>
int main()
{
	int i=1,n,num,temp=0,sum=0,count=0;
	printf("Enetr number which you want= ");
	scanf("%d",&num);
	
	while(i<=num)
	{
	    temp=temp*10+3;
	    printf("The series of number is= %d\n",temp);
	    count++;
	    printf("%d",count);
	    if(i<num)
	     {
		 	printf("\n");
		
		 }
		 i++;
	    
	  }
	
=======
//program to print number of series

#include<stdio.h>
int main()
{
	int i=1,n,num,temp=0,sum=0,count=0;
	printf("Enetr number which you want= ");
	scanf("%d",&num);
	
	while(i<=num)
	{
	    temp=temp*10+3;
	    printf("The series of number is= %d\n",temp);
	    count++;
	    printf("%d",count);
	    if(i<num)
	     {
		 	printf("\n");
		
		 }
		 i++;
	    
	  }
	
>>>>>>> 6a82df13945791b2c097598d6f2f13fa7ca2a4bf
    }