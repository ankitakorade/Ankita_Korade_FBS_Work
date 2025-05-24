//Employee(id,name,salary);

#include<stdio.h>
struct Employee
{
	int id;
	char name[50];
	float salary;
	
};
void display(struct Employee *e);

void main()
{
	struct Employee emp1,emp2;
	printf("Enter data for employee1: \n");
	printf("id : \n");
	scanf("%d",&emp1.id);
	printf("name: \n");
	scanf("%s",emp1.name);
	printf("sala,ry: \n");
	scanf("%f",&emp1.salary);
	
	printf("Enter data for employee2: \n");
	printf("id : \n");
	scanf("%d",&emp2.id);
	printf("name: \n");
	scanf("%s",emp2.name);
	printf("salary: \n");
	scanf("%f",&emp2.salary);
	
	display(&emp1);
	display(&emp2);
	
}

void display(struct Employee *e)
{
	printf("Student Details-----------\n");
	printf("id:%d\n",e->id);
	printf("name:%s\n",e->name);
	printf("salary:%.2f\n",e->salary);
}
