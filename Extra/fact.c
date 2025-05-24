/*program to find factorial number
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter number which you want=");
	scanf("%d",&num);
	while(num>0)
	{
		fact=fact*num;
		num--;
	}
	printf("The factorialof number is %d= ",fact);
	getch();
*/
//using for loop

#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter number which you wnat= ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d= ",i,fact);
     }