#include <stdio.h>
#include <string.h>

typedef struct {
	//char name[32];
	int id;
	int taken_credit;
	float grade[8]; // maximum 8 course per trimester
	float gpa;
	float cgpa;  
} Grade;


void check_id_file(char *st_id)
{
	printf("%s\n", *st_id);
	FILE *fp;
	fp = fopen("id.txt", "r");
	if (fp != NULL) {
		printf("yes");
		char stu_id[20];
		fscanf(fp, "%s", stu_id);
		printf("%s\n", stu_id);
		if (strcmp(st_id, stu_id)) printf("true");
		else printf("false");
	}
		
	else
		printf("no");

	fclose(fp);
}

int main() 
{
	//check_id_file("011221031");
	int n;
	printf("Enter no. of students: ");
	scanf("%d", &n);
	Grade st[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Enter Student ID: ");
		scanf("%d", &st[i].id);
		st[i].gpa = 0; st[i].taken_credit = 0;
		printf("Enter no. of course: \n");
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

	for (int i=0; i<n; i++)
	{
		printf("Id: %d gpa: %.2f\n", st[i].id, st[i].gpa);
	}

	return 0;
}
