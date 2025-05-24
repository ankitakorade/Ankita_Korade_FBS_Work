//Swapping the variable using temporary variable
#include<stdio.h>
 int main()
  {
  	int first,second,temp;
  	
  	printf("Enter the value first");
  	scanf("%d",&first);
  	
  	printf("Enter the value second");
  	scanf("%d",&second);
  	
  	temp=first;
  	first=second;
  	second=temp;
  	
  	printf("The number after swapping first= %d",first);
  	printf("\nThe number after swapping second= %d",second);
  	
  }