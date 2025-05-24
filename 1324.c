//HR(id,name,salary,comission):
#include<stdio.h>
struct HR
{
	int id;
	char name[40];
	float salary;
	float comission;
};
void accept(struct HR *hr,int n);
void display(struct HR *hr,int n);
int main()
{
	struct HR hr[4];
	accept(hr,4);
	display(hr,4);
}

void accept(struct HR *hr,int n)
{  
    for(int i=0;i<n;i++)
    {
	printf("Enter id:\n");
	scanf("%d",&hr[i].id);
	printf("Enter name:\n");
	scanf("%s",hr[i].name);
	printf("Enter salary:\n");
	scanf("%f",&hr[i].salary);
	printf("Enter comission:\n");
	scanf("%f",&hr[i].comission);
    }
}

void display(struct HR *hr,int n)
{
   printf("\n Admins detail:");
   for(int i=0;i<n;i++)
   {
   	printf("%d:\n",&hr[i].id);
   	printf("%s:\n",hr[i].name);
   	printf("%f:\n",&hr[i].salary);
   	printf("%f:\n",&hr[i].comission);
   }
}