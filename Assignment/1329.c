//Complex(real,imaginary):pass by address;
#include<stdio.h>
struct Complex
{
	double real;
    double imaginary;
	
	
};
void accept(struct Complex *comp,int n);
void display(struct Complex *comp,int n);

void main()
{
	struct Complex comp[1];
	accept(comp,1);
	display(comp,2);
  }
  
  void accept(struct Complex *comp,int n)
  {
     for(int i=0;i<n;i++)
   {
     
     printf("Enter real:");
     scanf("%lu",&comp[i].real);
     printf("Enetr imaginary:\n");
     scanf("%lu",&comp[i].imaginary);
   }
}

void display(struct Complex *comp,int n)
{
	for(int i=0;i,n;i++)
	{
	 printf("%lu:\n",comp[i].real);
	 printf("%lu:\n",comp[i].imaginary);
	 }
}
