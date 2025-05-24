//Employee(id,name,salary):

#include<stdio.h>
struct Employee
{
	int id;
	char name[40];
	float salary;
};

int main()
{
	struct Employee employes[2];
	accept(employes,2);
	display(employes,2);
}

void accept(struct Employee *employes,int n)
{  
    for(int i=0;i<n;i++)
    {
	printf("Enter id:\n");
	scanf("%d",&employes[i].id);
	printf("Enter name:\n");
	scanf("%s",employes[i].name);
	printf("Enter salary:\n");
	scanf("%f",&employes[i].salary);
    }
}

void display(struct Employee *employes,int n)
{
   printf("\n employess detail:");
   for(int i=0;i<n;i++)
   {
   	printf("id:\n",&employes[i].id);
   	printf("%s:\n",employes[i].name);
   	printf("%f:\n",&employes[i].salary);
   }
}