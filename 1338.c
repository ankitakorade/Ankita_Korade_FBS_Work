//Distance(feet,inch)
#include<stdio.h>
struct Distance
{
	int feet;
    float inch;
	
	
};
void display(struct Distance *d);

void main()
{
	struct Distance d1,d2,d3;
     printf("Enter data for d1: ");
     printf("Enter feet:");
     scanf("%d",&d1.feet);
     printf("Enetr min:\n");
     scanf("%f",&d1.inch);
     
    printf("Enter data for d2: ");
     printf("Enter feet:");
     scanf("%d",&d2.feet);
     printf("Enetr min:\n");
     scanf("%f",&d2.inch);
     
     printf("Enter feet:");
     scanf("%d",&d3.feet);
     printf("Enetr inch:\n");
     scanf("%f",&d3.inch);
     
     
     display(&d1);
     display(&d2);
     display(&d3);
     
}

void display(struct Distance *d)
{
	printf("%d:\n",d->feet);
	printf("%f:\n",d->inch);
	
}
