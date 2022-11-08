#include <stdio.h>

struct student {
	int roll;
	int age;
	float marks;
};

int main() 
{ // basic structure

	struct student stu = {3, 23, 75.7}; // OK
	printf("%d %d %.2f\n", stu.roll, stu.age, stu.marks);

	struct student st[2] = {1, 20, 89.5, 2, 21, 88.6}; // OK
	// st[0] = {1, 20, 89.5}; // evabe kora jabe na
	// st[1] = {2, 20, 89.2};
	for (int i=0; i<2; i++) {
		printf("%d %d %.2f\n", st[i].roll, st[i].age, st[i].marks);
	}

	return 0;
}