//program to print armstrong number

#include<stdio.h>
#include <math.h>
int main()
{
	int start,end;
	printf("Enetr the start and end range= ");
	scanf("%d %d",&start,&end);
	for(int num=start;num<=end;num++)
	{
		int originalnum=num;
		int sum=0;
		int numDigits=0;
		int tempnum=num;
		int digit;
		
		while(tempnum>0)
		{
			tempnum/=10;
			numDigits++;
		}
		tempnum=num;
		while(tempnum>0)
		{
			int digit=tempnum%10;
			sum+=pow(digit,numDigits);
			tempnum/=10;
		}
		if(sum==originalnum)
		  {
		  	printf("%d",originalnum);
		  }
		
	}
	printf("\n");
	return 0;
}

