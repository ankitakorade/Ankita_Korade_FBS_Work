//student(rollNO,name,marks):pass bye address:

#include<stdio.h>
struct Student
{
	int rollNO;
	char name[40];
	float marks;
};

void accept(struct Student *students,int n);
void display(struct Student *students,int n );

int main()
{  
    struct Student students[3];
   accept(students,3);	
   display(students,3);
}

void accept(struct Student *students,int n)
{
	for(int i=0;i<n;i++)
 {
   printf("Enetr rollNO: \n");
   scanf("%d",&students[i].rollNO);
   printf("Enetr name: \n");
   scanf("%s",students[i].name);
   printf("Enetr marks: \n");
   scanf("%f",&students[i].marks);
  }
}

void display(struct Student *students,int n)
{ 
   printf("\nStudents of details:");
   for(int i=0;i<n;i++)
   {
    printf("%d:\n",students[i].rollNO);
	printf("%s:\n",students[i].name);
	printf("%f:\n",students[i].marks);
   }
}