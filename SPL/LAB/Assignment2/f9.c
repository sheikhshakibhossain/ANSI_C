#include <stdio.h>

int factorial(int num) {
	int fac = 1;
	for (int i=1; i<=num; i++)
		fac *= i;
	return fac;
}

int main() {
	
	int n;
	scanf("%d", &n);
	int fac = factorial(n);
	printf("%d\n", fac); // OK
	
	return 0;
}

