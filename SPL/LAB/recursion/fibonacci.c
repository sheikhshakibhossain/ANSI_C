#include <stdio.h>
int fibonacci(int n);

int main() {
	
	int n;
	scanf("%d", &n);

	// for (int i=0; i<=n; i++)
	// 	printf("%d ", fibonacci(i)); // prints series
	printf("%dth Fibonacci term: %d\n", n, fibonacci(n));
	
	return 0;
}

int fibonacci(int n) {

	if (n==0 || n==1)
		return n;
	else
		return ( fibonacci(n-2) + fibonacci(n-1) );
}