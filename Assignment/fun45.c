//program to print fibonacci series upto n terms using function

#include<stdio.h>
void calculateseries(int );
int main()
{
	
	int num;
	printf("Enter number of terms:");
	scanf("%d",&num);
	calculateseries( num);

}

void calculateseries(int n)
{
     
	
	    int t1=0,t2=1,t3,count;	
	    
	    printf("fibonacci series are!!!\n");
		printf("%d,%d",t1,t2);
		
		for(count=3;count<=n;count++)
		{
			t3=t1+t2;
			printf("%d %d\n",t3,count);
			
			t1=t2;
			t2=t3;
		}
	}

		