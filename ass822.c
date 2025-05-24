#include<stdio.h>
void searchElement(int*,int);
int main()
{  
   int search;
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   printf("enter number which you want:");
   scanf("%d",&search);
   searchElement(arr,&search);
}

void searchElement(int* a,int ser)
{
  int i,flag=0;
  for(i=0;i<5;i++)
  {
  	if(a[i]==ser)
  	flag==0;
  }	
}
if(flag==1)
{
  printf("The number is found at position at position %d:",ser);
}
