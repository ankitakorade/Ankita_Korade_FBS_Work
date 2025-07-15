//Admin(id,name,salary,allowance)
#include<stdio.h>
struct Admin
{
	int id;
	char name[40];
	float salary;
	float allowance;
};

int main()
{
	struct Admin admins[2];
	accept(admins,2);
	display(admins,2);
}

void accept(struct Admin *admins,int n)
{  
    for(int i=0;i<n;i++)
    {
	printf("Enter id:\n");
	scanf("%d",&admins[i].id);
	printf("Enter name:\n");
	scanf("%s",admins[i].name);
	printf("Enter salary:\n");
	scanf("%f",&admins[i].salary);
	printf("Enter allowance:\n");
	scanf("%f",&admins[i].allowance);
    }
}

void display(struct Admin *admins,int n)
{
   printf("\n Admins detail:");
   for(int i=0;i<n;i++)
   {
   	printf("%d:\n",&admins[i].id);
   	printf("%s:\n",admins[i].name);
   	printf("%f:\n",&admins[i].salary);
   	printf("%f:\n",&admins[i].allowance);
   }
}