//Finding area and perimeter of rectangle and circle

#include<stdio.h>
int perimeter(int,int);
int areaCalculate(int,int);
 int main()
 {
 	int len,bre;
 	printf("\nEnter the value of l=\n");
 	scanf("%d",&len);
 	printf("\nEnter the value of b=\n");
 	scanf("%d",&bre);
 	perimeter(len, bre);
 	areaCalculate( len, bre);
 }
 int perimeter(int l,int b)
 {
 	 int peri;
     peri=2*(l+b);
 	   printf("\nThe perimeter of rectangle is=%d",peri);
  }
  int areaCalculate(int l,int b)
  {
  	 int area;
     area=l*b;
 	   printf("\nThe area of rectangle is=%d",area);
 }
			
 	
 	
 