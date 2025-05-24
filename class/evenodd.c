//program to count even and odd number from given number

#include<stdio.h>
int main()
{    int evenCtr=0,oddCtr=0;
     int digit,num;
	printf("Enter number which you want= ");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num % 10;
		if(digit %2 ==0)
		 evenCtr++;
		else
		 oddCtr++;
		 num/=10;
		
	}
	printf("The even digit number is= %d\n",evenCtr);
	printf("The odd digit number is= %d\n",oddCtr);
	return 0;
	
}