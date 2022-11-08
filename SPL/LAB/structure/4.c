#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct person {
	char name[40];
	 int age;
	float cgpa;
} PERSON;

void printStructure (PERSON p)
{
	printf("\nName: %s", p.name);
	printf("\nAge: %d", p.age);
	printf("\nCGPA: %.3f\n", p.cgpa);
}

void printStructure2 (PERSON p)
{
	int i = 0;
	// while (p.name[i] != '\0') // name upper case
	// {
	// 	if ( islower(p.name[i]) != 0 ) {
	// 		p.name[i] = toupper(p.name[i]);
	// 	}
	// 	i++;
	// }
	strcpy(p.name, strupr(p.name));
	p.age += 2; // age + 2
	p.cgpa *= 2; // cgpa * 2
	printStructure(p);
}

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

	for (int i=0; i<n; i++) {
		printf("\nPerson No. %d", i+1);
		printStructure2(p[i]); // NOT a call by reference
		// printStructure(p[i]);
	}

	return 0;
}