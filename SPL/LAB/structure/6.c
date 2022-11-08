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

// void printStructure2 (PERSON *p)
// {
// 	int i = 0;
// 	// while (p.name[i] != '\0') // name upper case
// 	// {
// 	// 	if ( islower(p.name[i]) != 0 ) {
// 	// 		p.name[i] = toupper(p.name[i]);
// 	// 	}
// 	// 	i++;
// 	// }
// 	//strcpy(p->name, strupr((p->name));
// 	p->age += 2; // age + 2
// 	p->cgpa *= 2; // cgpa * 2
// }

PERSON insertType1(char name[40], int age, float cgpa)
{
	PERSON x;
	strcpy(x.name, name);
	x.age = age;
	x.cgpa = cgpa;
	return x;
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
		//strcpy(p[i].name, name);

		printf("Age: ");
		int age;
		scanf("%d", &age);
		//scanf("%d", &p[i].age);
		float cgpa;
		printf("CGPA: ");
		scanf("%f", &cgpa);
		//scanf("%f", &p[i].cgpa);
		p[i] = insertType1(name, age, cgpa);
	}

	for (int i=0; i<n; i++) {
		printf("\nPerson No. %d", i+1);
		//printStructure2(p[i]); // call by reference
		printStructure(p[i]);
	}

	return 0;
}