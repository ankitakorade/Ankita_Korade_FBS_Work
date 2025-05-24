//program to check number is strong or not

#include<stdio.h>
void isstrong();
int main()
{
	isstrong();
}
void isstrong()
{

	int n, temp,rem,sum=0,i,fact;
	printf("Enter number which you want=");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		i=1;
		fact=1;
		rem=n%10;
		while(i<=rem)
		{
		  fact=fact*i;
		  i++;	
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	 {
	   printf("The %d is a strong number",temp);
	 }
	  else
	  {
	    printf("The %d is a not strong number",temp);
	  }
	  }
	 
