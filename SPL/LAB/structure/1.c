#include <stdio.h>
#include <string.h>

typedef struct person {
	char name[40];
	 int age;
	// int salary;
	//int marks[4];
	float cgpa;
} PERSON;

int main() 
{
	//struct person p1;
	PERSON p1;
	fgets(p1.name, sizeof(p1.name), stdin);
	p1.name[strcspn(p1.name, "\n")] = '\0';
	scanf("%d", &p1.age);
	scanf("%f", &p1.cgpa);

	printf("\nName: %s", p1.name);
	printf("\nAge: %d", p1.age);
	printf("\nCGPA: %.2f", p1.cgpa);

	return 0;
}