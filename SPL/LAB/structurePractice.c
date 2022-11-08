#include <stdio.h>
#include <ctype.h>

typedef struct {

	char name[32];
	int roll;
	int mark;
	
} student;


int main() {
	
	int n = 2;
	student st[n];
	for (int i=0; i<n; i++) {

		gets(st[i].name);
		scanf("%d %d", &st[i].roll, &st[i].mark);
		//fflush(stdin);
		// int a;
		// printf("Enter any key...");
		// scanf("%d", &a); // OK
		getchar(); // OK
	}

	for (int i=0; i<n; i++) {

		for (int j=i+1; j<n; j++) {
			
			if ( st[i].roll > st[j].roll ) { // bubble sort

				student temp;
				temp = st[j];
				st[j] = st[i];
				st[i] = temp;
			}
		}
	}

	for (int i=0; i<n; i++) 
		printf("Name: %s\tRoll: %d\tMarks: %d\n", st[i].name, st[i].roll, st[i].mark);
	
	return 0;
}
