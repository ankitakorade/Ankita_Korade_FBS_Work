//student(rollNO,name,marks)pass one structure to function by address:

#include<stdio.h>
struct Student
{
	int rollNO;
	char name[30];
	float marks;
	
};
int main()
{
  struct Student s;
  printf("Enter student rollNO:\n");
  scanf("%d",&s.rollNO);
  printf("Enter student name:\n");
  scanf("%s",s.name);
  printf("Enter student marks:\n");
  scanf("%f",&s.marks);
  
  displayStudent(&s);
}

void displayStudent(struct Student *s)
{
	printf("Student details:\n");
	printf("rollNO:%d\n",s->rollNO);
	printf("Name:%s\n",s->name);
	printf("Marks:%f\n",s->marks);
}
