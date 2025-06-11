//Product(id,name,quantity):pass by adress:
#include<stdio.h>
struct Product
{
	int id;
	char name[40];
	int quantity;
    int price;
	
	
};

void accept(struct Product *product,int n);
void display(struct Product *product,int n);

void main()
{
	struct Product product[2];
	accept(product,2);
	display(product,2);
	
  }
  
  void accept(struct Product *product,int n)
  {
     for(int i=0;i<n;i++)
     {
     	 
         printf("Enter id:");
         scanf("%d",&product[i].id);
         printf("Enetr name:\n");
         scanf("%s",product[i].name);
         printf("Enter quantity:\n");
         scanf("%d",&product[i].quantity);
         printf("Enter price:\n");
         scanf("%d",&product[i].price);
	 }
	
}

void display(struct Product *product,int n)
{
	for(int i=0;i<n;i++)
	{
     printf("%d:\n",product[i].id);
	 printf("%s:\n",product[i].name);
	 printf("%d:\n",product[i].quantity);
	 printf("%d:\n",product[i].price);
	
}
}
