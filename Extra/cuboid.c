//Program for a cuboid to print surface and volume(Hint: surface area=2(lb+lh+bh),volume=lbh)

#include<stdio.h>
int main()
{
	int ar,v,l,b,h,i,n,p,q,r;
	printf("How many times you want run=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	 p:
	printf("Enter the value of volume=");
	scanf("%d",&v);
	if(v<=0)
	 {
	 	printf("PLZ enter the valid value of v greater than zero\nPLZ enter again");
	 	goto p;
		 
		 	 }
		 	 
     q:
	printf("Enter the value of height=");
    scanf("%d,&h");
    if(h<=0)
     {
     	printf("PLZ enter the valid value of h greater than zero\nPLZ enter again");
     	goto q;
	 }
	 r:
	printf("Enter the value of breadth=");
	scanf("%d",&b);	
	if(b<=0)
	 {
	 	printf("PLZ enter the valid value of h greater than zero\nPlZ enter again");
	 	goto r;
	 		
	 }
	 ar= 2*(l*b+l*h+b*h);
	 v=(l*b*h);
	 printf("\nThe value of surface area is=%d",ar);
	 printf("\nThe value of volume is=%d",v);
	 
	 
	
}
}