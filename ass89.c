//program to print reverse array using pointer

#include<stdio.h>
void printReverseArray(int*,int);
int main()
{
	int a[10];
 printf("Eneter element in array:\n");
 for(int i=0;i<10;i++)
 {
   scanf("%d",&a[i]);
 }
 printReverseArray(a,10);
}

void printReverseArray(int *a,int n)
{
   for(int i=9;i>0;i--)
   {
   	  printf("The reverse array is:%d\n",a[i]);
   }	
}