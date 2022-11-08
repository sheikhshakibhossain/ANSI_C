#include <stdio.h>
#include <stdbool.h>

int main() {
	
	double a;
	bool b;

	a = 3.140000e+00;
	b = 1;

	printf("The double value: %lf\n", a);
	printf("The double value: %e\n", a); // e+00 will show in output because of %e
	printf("The boolean value: %d\n", b);
	
	return 0;
}

