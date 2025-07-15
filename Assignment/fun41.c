#include<stdio.h>
int isArmstrong(int );
int main()
{
  int num;
  printf("Enter number= ");
  scanf("%d",&num);
  int a=isArmstrong(num);
  printf("%d",a);	
}
int isArmstrong(int n)
{

	for(int i=1;i<=n;i++)
	{
		int temp=n;
		int rem,sum;
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	{
		
	   if(temp==sum)
	       return 1;
	    else
	       return 0;
      }
      }
  }
  /*include<stdio.h>
int main()
{
	int n,rem,temp,sum=0;
	printf("Enter number wich you want= ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
	   rem=n%10;
	   sum=sum+(rem*rem*rem);
	   n=n/10;	
	}
	if(temp==sum)
	  printf("The  number is armstrong number");
	else
	  printf("The  number is not armstrong number");
       }*/
	
