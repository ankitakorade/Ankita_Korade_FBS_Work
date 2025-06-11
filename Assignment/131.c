//student(rollNo,name,marks)

#include<stdio.h>
struct Student
{
	int rollNO;
	char name[50];
	float marks;
};

void main()
	
{
	struct Student s1,s2,s3;
	printf("Enter details for student 1:\n");
	printf("rollNO for student:\n");
	scanf("%d",&s1.rollNO);
	printf(" name for student:\n");
	scanf("%s",s1.name);
	printf(" marks for student :\n");
	scanf("%f",&s1.marks);
	
	printf("Enetr details for student 2:\n");
	printf(" rollNO for student:");
	scanf("%d",&s2.rollNO);
	printf(" name for student: ");
	scanf("%s",s2.name);
	printf(" marks for student : ");
	scanf("%f",&s2.marks);
	
	printf("Enter details for student 3:\n");
	printf(" rollNO for student: \n");
	scanf("%d",&s3.rollNO);
	printf(" name for student: \n");
	scanf("%s",s3.name);
	printf(" marks for student : \n");
	scanf("%f",&s3.marks);
	
	displayStudent(s1);
	displayStudent(s2);
	displayStudent(s3);
}

void displayStudent(struct Student s)
{
	printf("\n------Student Details------\n");
	printf("rollNO:%d\n",s.rollNO);
	printf(" name:%s\n",s.name);
	printf(" marks:%f\n",s.marks);
}


