#include <stdio.h>

typedef struct {

	char name[32];
	int id;
	float marks;

	struct dateOfBirth {		
		int dd;
		int mm;
		int yy;
	} DOB; // DOB is variable here and member of Student

} Student;

int main() {
	
	Student st;
	gets(st.name);
	scanf("%d %f", &st.id, &st.marks);
	scanf("%d %d %d", &st.DOB.dd, &st.DOB.mm, &st.DOB.yy);

	printf("Name: %s\n", st.name);
	printf("ID: %d\n", st.id);
	printf("Marks: %.2f\n", st.marks);
	printf("Date of Birth info: ");
	printf("%d/%d/%d\n", st.DOB.dd, st.DOB.mm, st.DOB.yy);
	
	return 0;
}
