//program to print armstrong number in given range using for loop

#include<stdio.h>
#include<math.h>
int main()
{
	int start,end;
	printf("Enter the start and end range= ");
	scanf("%d %d",&start,&end);
	
	for(int num=start;num<=end;num++)
	{
		int originalNum=num;
		int sum=0;
		int numDigits=0;
		int tempNum=num;
		
		while(tempNum>0)
		{
			tempNum/=10;
			numDigits++;
		}
		tempNum=num;
		while(tempNum>0)
		{
			int digit=tempNum%10;
			sum+=pow(digit,numDigits);
			tempNum/=10;
		}
		if(sum==originalNum)
		{
			printf("%d",originalNum);
		}
	}
	printf("\n");
	return 0;

}