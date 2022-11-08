#include <stdio.h>

typedef struct {
	char name[32];
	int age;
	int codes[7];
	int total_codes;
	float avg_code_in_week;
	float salary;	
} Employee;

int main() { // OK
	
	Employee emp;
	Employee *ptr;
	ptr = &emp;

	gets(ptr->name);
	scanf("%d %f", &ptr->age, &ptr->salary);
	//printf("Name: %s\nAge: %d\nSalary: %.2f\n", ptr->name, ptr->age, ptr->salary);

	ptr->total_codes = 0;
	//fflush(stdin);
	for (int i=0; i<7; i++) {
		scanf("%d", &ptr->codes[i]);
		ptr->total_codes += ptr->codes[i]; // emp.codes[i]
	}
	ptr->avg_code_in_week = (float)ptr->total_codes / 7;
	
	printf("Name: %s\nAge: %d\nSalary: %.2f\n", ptr->name, ptr->age, ptr->salary);
	printf("Avg. codes in week: %d\n", ptr->total_codes);
	printf("Avg. codes in week: %.2f\n", ptr->avg_code_in_week);
	
	return 0;
}