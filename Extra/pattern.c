//program to display the pattern like right angle triangle

#include<stdio.h>
int main()
{
	int i,n,rows=4,j=1;
	printf("enter the number of rows= ");
	scanf("d",&rows);
	
	for(i=1;i<=rows;i++)
	 {
	 	for(j=1;j<=i;j++)
	 	printf("%d",j++);
	 	printf("\n");
	 }
}