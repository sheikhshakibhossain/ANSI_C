#include <stdio.h>

typedef struct {
	char name[32];
	int id;
	float marks[5];
	float total;
	float percentage;

} Student;

int main() {
	
	Student st;
	gets(st.name);
	scanf("%d", &st.id);
	st.total = 0;
	for (int i=0; i<5; i++) {
		scanf("%f", &st.marks[i]);
		st.total += st.marks[i];
	}
	//printf("=====%f======\n", st.total);
	st.percentage = (st.total * 100) / 500;
	printf("Name: %s\tID: %d\tResult: %.2f%%\n", st.name, st.id, st.percentage);

	return 0;
}