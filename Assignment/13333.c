//Admin:(id,name,salary,allowance)

#include<stdio.h>
struct Admin
{
	int id;
	char name[40];
	float salary,allowance;
	
};
void display(struct Admin *a);

void main()
{
	struct Admin a1,a2;
	printf("Enter data for Admin1: \n");
	printf("id of admin:\n");
	scanf("%d",&a1.id);
	printf("name of admin:\n");
	scanf("%s",a1.name);
	printf("salary of admin:\n");
	scanf("%f",&a2.salary);
	
	printf("Enter data for Admin2: \n");
	printf("id of admin:\n");
	scanf("%d",&a2.id);
	printf("name of admin:\n");
	scanf("%s",a2.name);
	printf("salary of admin:\n");
	scanf("%f",&a2.salary);
	
	display(&a1);
	display(&a2);
}
void display(struct Admin *a)
{
	printf("id:%d\n",a->id);
	printf("name:%s\n",a->name);
	printf("salary:%f\n",a->salary);
	printf("allowance:%f\n",a->allowance);
}