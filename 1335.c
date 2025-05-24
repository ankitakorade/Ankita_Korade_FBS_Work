//salesManager:(id,name,salary,incentive,target)

#include<stdio.h>
struct SalesManager
{
	int id;
	char name[50];
	double salary;
	float incentive;
	char target[40];
	
};
void display(struct SalesManager *s);

void main()
{
	struct SalesManager s1,s2;
     printf("Enter data for first 1: ");
     printf("Enter id:");
     scanf("%d",&s1.id);
     printf("Enetr name:\n");
     scanf("%s",s1.name);
     printf("Enetr incentive:\n");
     scanf("%f",&s1.incentive);
     printf("Enetr target:\n");
     scanf("%s",s1.target);
     
     printf("Enetr data for second manager:\n");
     printf("Enetr id:\n");
     scanf("%d",&s2.id);
     printf("Enter name:\n");
     scanf("%s",s2.name);
     printf("Enetr incentive:\n");
     scanf("%f",&s2.incentive);
     printf("Enter target:");
     scanf("%s",s2.target);
     
     display(&s1);
     display(&s2);
     
}

void display(struct SalesManager *s)
{
	printf("%d:\n",s->id);
	printf("%s:\n",s->name);
	printf("%f:\n",s->incentive);
	printf("%s:\n",s->target);
}
