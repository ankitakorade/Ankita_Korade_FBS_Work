<<<<<<< HEAD
//program to print armstrong number from 1 to n using nested loop

#include<stdio.h>
#include<conio.h>
void isArmstrong(int);
void  main()
{
  int i,num,digit,sum=0;
  printf("Enter value of number= ");
  scanf("%d",&num);
  isArmstrong( num);
}
void isArmstrong(int m)
{

  
  for(int i=1;i<=m;i++)
  {
  	 int digit;
  	 int n=i;
  	 int sum=0;
  	 while(n!=0)
  	 {
  	 	digit=n%10;
  	 	sum=sum+(digit*digit*digit);
  	 	n=n/10;
  	 	
	   }
	   if(i==sum)
	    printf("%d is armstrong\n",i);
	    
	  }	
	  getch();
}


=======
//program to print armstrong number from 1 to n using nested loop

#include<stdio.h>
#include<conio.h>
void isArmstrong(int);
void  main()
{
  int i,num,digit,sum=0;
  printf("Enter value of number= ");
  scanf("%d",&num);
  isArmstrong( num);
}
void isArmstrong(int m)
{

  
  for(int i=1;i<=m;i++)
  {
  	 int digit;
  	 int n=i;
  	 int sum=0;
  	 while(n!=0)
  	 {
  	 	digit=n%10;
  	 	sum=sum+(digit*digit*digit);
  	 	n=n/10;
  	 	
	   }
	   if(i==sum)
	    printf("%d is armstrong\n",i);
	    
	  }	
	  getch();
}


>>>>>>> 6a82df13945791b2c097598d6f2f13fa7ca2a4bf
