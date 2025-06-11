//program calculate area and perimeter of rectangle and circle

#include<stdio.h>
void areacalculate();
int l,b,r,area,peri;
void main()
{
	areacalculate();
 	printf("\nEnter the value of l=");
 	scanf("%d",&l);
 	printf("\nEnter the value of b=");
 	scanf("%d",&b);
 	printf("\nThe perimeter of rectangle is= %d",peri);
 	printf("\nThe area of rectangle is=%d",area);
 }
 void areacalculate()
{
     peri=2*(l+b);
 	// printf("\nThe perimeter of rectangle is=%d",peri);
 	 area=l*b;
 	// printf("\nThe area of rectangle is=%d",area);
	
 }


