#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

typedef struct {
	char name[32];
	int id;
	int taken_credit;
	float grade[8]; // maximum 8 course per trimester
	float gpa;
	float cgpa;  
} Grade;


void insert(Grade st[])
{
	int n;
	printf("Enter no. of students: ");
	scanf("%d", &n);
	
	for (int i=0; i<n; i++)
	{
		getchar();
		char name[32];
		printf("\nStudent name: ");
		fgets(name, 32, stdin);
		name[strcspn(name, "\n")] = '\0';
		strcpy(st[i].name, name);
		printf("Enter Student ID: ");
		scanf("%d", &st[i].id);
		st[i].gpa = 0; st[i].taken_credit = 0;
		printf("Enter no. of course: ");
		int no; scanf("%d", &no);
		for (int j=0; j<no; j++)
		{
			printf("Course credit: ");
			int credit; scanf("%d", &credit);
			st[i].taken_credit += credit;
			printf("Obtained grade: ");
			scanf("%f", &st[i].grade[j]);
			st[i].gpa += st[i].grade[j] * credit; 
		}
		st[i].gpa /= st[i].taken_credit;
	}
}

void display(Grade st[])
{
	printf("\nNo of students: "); 
	int n; scanf("%d", &n);
	for (int i=0; i<n; i++) {
		printf("Name: %s\nID: %d\nComplited Credits: %d\n", st[i].name, st[i].id, st[i].taken_credit);
		printf("GPA: %.2f\nCGPA: %.2f\n", st[i].gpa, st[i].cgpa);
	}
}

int main() 
{
	Grade st[MAX];

	insert(st);
	display(st);
	insert(st);
	display(st);

	return 0;
}
