//program to calculate father and son age after five years

#include<stdio.h>
 int main()
 {
 	int fatherage,sonage,count=0;
 	printf("Enter the Fatherage= \n");
 	scanf("%d",&fatherage);
 	printf("Enter the Sonage= \n");
 	scanf("%d",&sonage);
 	
 	while(fatherage!=2*sonage)
 	{
 		fatherage++;
 		sonage++;
 		count++;
	 }
	 printf("The age is= %d",count);
	 
 	
 	
 }