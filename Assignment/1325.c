//SalesManager(id,name,salary,incentive,target)
#include<stdio.h>
struct SalesManager
{
	int id;
	char name[40];
	float salary;
	float incentive;
	char target[50];
};
void accept(struct SalesManager *Smanager,int n);
void display(struct SalesManager *Smanager,int n);
int main()
{
	struct SalesManager Smanager[4];
	accept(Smanager,4);
	display(Smanager,4);
}

void accept(struct SalesManager *Smanager,int n)
{  
    for(int i=0;i<n;i++)
    {
	printf("Enter id:\n");
	scanf("%d",&Smanager[i].id);
	printf("Enter name:\n");
	scanf("%s",Smanager[i].name);
	printf("Enter salary:\n");
	scanf("%f",&Smanager[i].salary);
	printf("Enter incentive:\n");
	scanf("%f",&Smanager[i].incentive);
	printf("Enetr target:\n");
	scanf("%s",&Smanager[i].target);
    }
}

void display(struct SalesManager *Smanager,int n)
{
   printf("\n Admins detail:");
   for(int i=0;i<n;i++)
   {
   	printf("%d:\n",&Smanager[i].id);
   	printf("%s:\n",Smanager[i].name);
   	printf("%f:\n",&Smanager[i].salary);
   	printf("%f:\n",&Smanager[i].incentive);
   	printf("%s:\n",Smanager[i].target);
   }
}