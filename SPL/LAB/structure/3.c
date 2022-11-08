#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct person {
	char name[40];
	 int age;
	float cgpa;
} PERSON;

int main() 
{
	int n;
	scanf("%d", &n);
	PERSON p[n];

	for (int i=0; i<n; i++)
	{
		getchar();
		printf("Enter the value of person %d\n", i+1);
		printf("Name: ");
		char name[40];
		fgets(name, sizeof(name), stdin);
		name[strcspn(name, "\n")] = '\0';
		strcpy(p[i].name, name);

		printf("Age: ");
		scanf("%d", &p[i].age);
		printf("CGPA: ");
		scanf("%f", &p[i].cgpa);
	}

	for (int i=0; i<n; i++)
	{
		printf("\nPerson No. %d", i+1);
		printf("\nName: %s", p[i].name);
		printf("\nAge: %d", p[i].age);
		printf("\nCGPA: %.3f\n", p[i].cgpa);
	}

	return 0;
}