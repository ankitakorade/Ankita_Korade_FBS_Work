//Product(id,name,quantity)
#include<stdio.h>
struct Product
{
	int id;
	char name[40];
	int quantity;
    int price;
	
	
};
void display(struct Product *p);

void main()
{
	struct Product p1,p2;
     printf("Enter data for p1: ");
     printf("Enter id:");
     scanf("%d",&p1.id);
     printf("Enetr name:\n");
     scanf("%s",p1.name);
     printf("Enter quantity:\n");
     scanf("%d",&p1.quantity);
     printf("Enter price:\n");
     scanf("%d",&p1.price);
     
    printf("Enter data for p2: ");
    printf("Enter id:");
     scanf("%d",&p2.id);
     printf("Enetr name:\n");
     scanf("%s",p2.name);
     printf("Enter quantity:\n");
     scanf("%d",&p2.quantity);
     printf("Enter price:\n");
     scanf("%d",&p2.price);
    
      display(&p1);
      display(&p2);
     }

void display(struct Product *p)
{
	printf("%d:\n",p->id);
	printf("%s:\n",p->name);
	printf("%d:\n",p->quantity);
	printf("%d:\n",p->price);
	
}
