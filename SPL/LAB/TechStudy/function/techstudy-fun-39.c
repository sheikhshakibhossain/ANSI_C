#include <stdio.h>
int fac(int n);

int main() {
	
	int n;
	scanf("%d", &n);
	int factorial = fac(n);
	printf("%d\n", factorial);
	
	return 0;
}

int fac(int n) {

	if (n==1) {
		printf("%d = ", n); // SO: 5 x 4 x 3 x 2 x 1 = 120
		return 1;
	}
	
	printf("%d x ", n);
	return ( n * fac(n-1) );
	
}