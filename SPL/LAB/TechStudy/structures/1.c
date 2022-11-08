#include <stdio.h>
#include <ctype.h>

typedef struct {

	char name[32];
	int age;
	float marks;
} Student;

int main() {
	
	int n;
	scanf("%d", &n);
	Student st[n];

	for (int i=0; i<n; i++) 
	{
		printf("Enter info for student[%d]:\n", i+1);
		scanf("%s", st[i].name);
		scanf("%d %f", &st[i].age, &st[i].marks);
		//gets(st[i].name); // why doesnt work man ?
		//getchar();
	}
	
	printf("Student Information: \n");
	for (int i=0; i<n; i++) 
	{
		printf("Name: %s\tAge: %d\t\tMarks: %.2f\n", st[i].name, st[i].age, st[i].marks);
	}

	return 0;
}
