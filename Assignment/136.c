//Date(date,month,year)
#include<stdio.h>
struct Date
{
	int date;
	char month[50];
	double year;
	
	
};

void main()
{
	struct Date d1,d2;
     printf("Enter data for date1: ");
     printf("Enter date:");
     scanf("%d",&d1.date);
     printf("Enetr month:\n");
     scanf("%s",d1.month);
     printf("Enetr year:\n");
     scanf("%d",&d1.year);
     
    printf("Enter data for date2: ");
     printf("Enter date:");
     scanf("%d",&d2.date);
     printf("Enetr month:\n");
     scanf("%s",d2.month);
     printf("Enetr year:\n");
     scanf("%d",&d2.year);
     
     
     
     
     display(d1);
     display(d2);
     
}

void display(struct Date d)
{
	printf("%d:\n",d.date);
	printf("%s:\n",d.month);
	printf("%d:\n",d.year);
}
