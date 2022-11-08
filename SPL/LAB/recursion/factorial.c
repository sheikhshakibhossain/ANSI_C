#include <stdio.h>
int factorial(int num);

int main() {
	
	int n;
	printf("Input any number: ");
	scanf("%d", &n);
	printf("Factorial of %d = %d\n", n, factorial(n));
	
	return 0;
}

int factorial(int num) {

	if (num == 1) // base call
		return 1;

	return num * factorial(num-1);
}