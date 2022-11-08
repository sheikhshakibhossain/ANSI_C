#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char name[32];
	int id;
	int taken_credit;
	float grade[8]; // maximum 8 course per trimester
	float gpa;
	float cgpa;  
} Grade;


void insert(Grade *st, int *trimester)
{
 
		printf("Enter no. of course: ");
		int no; scanf("%d", &no);
		for (int j=0; j<no; j++)
		{
			printf("Course credit: ");
			int credit; scanf("%d", &credit);
			st->taken_credit += credit;
			printf("Obtained grade: ");
			scanf("%f", &st->grade[j]);
			st->gpa += st->grade[j] * credit; 
		}
		st->gpa /= st->taken_credit;
		*trimester += 1;
}

void display(Grade st)
{
	printf("Name: %s\nID: %d\nComplited Credits: %d\n", st.name, st.id, st.taken_credit);
	printf("GPA: %.2f\nCGPA: %.2f\n", st.gpa, st.cgpa);
}

int main() 
{
	Grade st;
	int trimester = 0;
	st.gpa = 0;
	st.cgpa = 0;
	st.taken_credit = 0; 

	printf("\nStudent name: ");
	fgets(st.name, 32, stdin);
	st.name[strcspn(st.name, "\n")] = '\0';
	printf("Enter Student ID: ");
	scanf("%d", &st.id);

	insert(&st, &trimester);
	display(st);
	printf("trimester = %d\n", trimester);

	return 0;
}
