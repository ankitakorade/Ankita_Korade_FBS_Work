//program to check number is armstrong or not

#include<stdio.h>
#include<math.h>
int isStrong(int*);
int main()
{
	int num,i;
	printf("Enter number which you want= ");
	scanf("%d",&num);
	if(isStrong(&num))
	   printf("%d is an armstrong number.\n",num);
	else
	   printf("%d is not armstrong number\n",num);
}
int isStrong(int *n)
{    
    int originalnum=*n;
	int result=0,c=0,temp=*n;
	
	while(temp!=0)
	{
		temp/=10;
		c++;
	}
	temp=*n;
	while(temp!=0)
	{
		int digit=temp%10;
		result+=pow(digit,c);
		temp/10;
	}
	return(result==temp);
	
}