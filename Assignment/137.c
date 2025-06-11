
//Time(hour,min,sec):
#include<stdio.h>
struct Time
{
	int hour;
	int min;
	int sec;
	
	
};

void main()
{
	struct Time t1,t2;
     printf("Enter data for time1: ");
     printf("Enter time:");
     scanf("%d",&t1.hour);
     printf("Enetr min:\n");
     scanf("%d",&t1.min);
     printf("Enetr sec:\n");
     scanf("%d",&t1.sec);
     
    printf("Enter data for time1: ");
     printf("Enter time:");
     scanf("%d",&t2.hour);
     printf("Enetr min:\n");
     scanf("%d",&t2.min);
     printf("Enetr sec:\n");
     scanf("%d",&t2.sec);
     
     
     display(t1);
     display(t2);
     
}

void display(struct Time t)
{
	printf("%d:\n",t.hour);
	printf("%d:\n",t.min);
	printf("%d:\n",t.sec);
}
