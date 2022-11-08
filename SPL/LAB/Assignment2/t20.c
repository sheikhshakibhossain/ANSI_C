#include <stdio.h>
int fac(int n);

int main() {
	
	int n;
	scanf("%d", &n);

	int factorial = fac(n);
	printf("%d\n", factorial); // OK
	
	return 0;
}

int fac(int n) {

	if (n==1)
		return n;

	return n * fac(n-1);
}
