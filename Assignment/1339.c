//Complex(real,imaginary)
#include<stdio.h>
struct Complex
{
	double real;
    double imaginary;
	
	
};
void display(struct Complex *c);

void main()
{
	struct Complex c1,c2;
     printf("Enter data for complex1: ");
     printf("Enter real:");
     scanf("%lu",&c1.real);
     printf("Enetr imaginary:\n");
     scanf("%lu",&c1.imaginary);
     
    printf("Enter data for c2: ");
     printf("Enter real:");
     scanf("%lu",&c2.real);
     printf("Enetr min:\n");
     scanf("%lu",&c2.imaginary);
     
    
     display(&c1);
     display(&c2);
}

void display(struct Complex *c)
{
	printf("%lu:\n",c->real);
	printf("%lu:\n",c->imaginary);
	
}
