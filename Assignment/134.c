//HR:(id,name,salary,commission)

#include<stdio.h>
struct Hr
{
	int id;
	char name[30];
	float salary,commission;
	
};
void display(struct Hr hr);

void main()
{

	struct Hr h1,h2;
	printf("Enetr id of hr:\n");
	scanf("%d",&h1.id);
	printf("Enetr name of hr:\n");
	scanf("%s",h1.name);
	printf("Enter salary of hr:\n");
	scanf("%f",&h1.salary);
	printf("Enetr commission of hr:\n");
	scanf("%f",&h1.commission);
	
	printf("Enetr id of hr:\n");
	scanf("%d",&h2.id);
	printf("Enetr name of hr:\n");
	scanf("%s",h2.name);
	printf("Enter salary of hr:\n");
	scanf("%f",&h2.salary);
	printf("Enetr commission of hr:\n");
	scanf("%f",&h2.commission);
}
void display(struct Hr h)
{
  printf("id:%d\n",h.id);
  printf("name:%s\n",h.name);
  printf("salary:%f\n",h.salary);
  printf("commission:%f",h.commission);	
}