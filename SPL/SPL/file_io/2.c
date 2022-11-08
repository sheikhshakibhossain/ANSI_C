#include <stdio.h>

int main() 
{
	char name[32];
	int age;
	float salary;

	fgets(name, 32, stdin);
	scanf("%d %f", &age, &salary);

	FILE *fp;
	// fp = fopen("test.txt", "w"); // write --> echo "hello world!" > test.txt
	fp = fopen("test.txt", "a"); // append is like echo "kemon acho?" >> test.txt
	if (fp == NULL) {
		return -1;
	}
	// printing in text file
	fprintf(fp, "Name: %sAge: %d\nSalary: %.2f\n", name, age, salary);
	fclose(fp);

	return 0;
}
