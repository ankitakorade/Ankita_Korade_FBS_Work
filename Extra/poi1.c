//program to print 1 to n number using pointer
#include<stdio.h>
void calculateNumber(int*,int*);
void main()
{
	int start=1;
	int end=20;
	calculateNumber(&start,&end);
}
void calculateNumber(int *ptr,int *end)
{
  for(int i=*ptr;i<*end;i++){
  	printf("%d-",i);
  }
}