//Accept the three digit number  from user and find the sum and reverse of the number

#include<stdio.h>
  int main()
  {
  	 int sum,num,n1,n2,n3;
  	 printf("Enter the number=");
  	 scanf("%d",&num);
  	 
  	 n1=num%10;
  	 num=num/10;
  	 
  	 n2=num%10;
  	 num=num/10;
  	 
  	 n3=num%10;
  	 num=num/1;
  	 printf("The reverse number is=%d,%d,%d",n1,n2,n3);
  	 
  	 sum=n1+n2+n3;
  	 printf("\nThe sum of  number is %d",sum);
  	 
  	 
  	 
  	 
  	
  }