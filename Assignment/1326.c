//Date(date,month,year) by pass by address:
#include<stdio.h>
struct Date
{
	int date;
	char month[50];
	double year;
	
	
};
void accept(struct Date *dates,int n);
void display(struct Date *dates,int n);
void main()
{
	
     struct Date dates[3];
	 accept(dates,3);
	 display(dates,3);	
}

void accept(struct Date *dates,int n)
{
     for(int i=0;i<n;i++)
      {
	 
         printf("Enter date:");
          scanf("%d",&dates[i].date);
          printf("Enetr month:\n");
          scanf("%s",dates[i].month);
          printf("Enetr year:\n");
          scanf("%d",&dates[i].year);
      }
     
   }
   
   void display(struct Date *dates,int n)
   {
   	 for(int i=0;i<n;i++)
   	 {
   	   printf("%d:\n",dates[i].date);
	    printf("%s:\n",dates[i].month);
	     printf("%d:\n",dates[i].year);
	 }
   }
     
    

