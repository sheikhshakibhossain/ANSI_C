#include <stdio.h>

int main() {
	
	const int age = 22;
	int *p;
	p = &age;

	*p = 12;
	printf("%d\n", age);
	
	return 0;
}
