//Distance(feet,inch)pass by adress:
#include<stdio.h>
struct Distance
{
	int feet;
    float inch;
	
	
};
void accept(struct Distance *distance,int n);
void accept(struct Distance *distance,int n);

void main()
{
	
	struct Distance *distance[3];
	accept(distance,3);
	display(distance,3);
}

void accept(struct Distance *distance,int n)
{
	for(int i=0;i<n;i++)
	{
	  
     printf("Enter feet:");
     scanf("%d",&distance[i].feet);
     
     printf("Enetr inch:\n");
     scanf("%f",&distance[i].inch);
     }
 }
     

void display(struct Distance *distance ,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("%d:\n",distance[i].feet);
	printf("%f:\n",distance[i].inch);
    }
	
}
