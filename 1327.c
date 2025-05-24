//Time(hour,min,sec):pass by address
#include<stdio.h>
struct Time
{
	int hour;
	int min;
	int sec;
	
	
};
void accept(struct Time *time,int n);
void display(struct Time *time,int n);

void main()
{
	
	 struct Time time[3];
	 accept(time,3);
	 display(time,3);
}

void accept(struct Time *time,int n)
{
	for(int i=0;i<n;i++)
	{
	 
     printf("Enter time:");
     scanf("%d",&time[i].hour);
     printf("Enetr min:\n");
     scanf("%d",&time[i].min);
     printf("Enetr sec:\n");
     scanf("%d",&time[i].sec);
    }
     
}

void display(struct Time *time,int n)
{
	for(int i=0;i<n;i++)
	{
	  printf("%d:\n",time[i].hour);
	  printf("%d:\n",time[i].min);
      printf("%d:\n",time[i].sec);
    }
}
