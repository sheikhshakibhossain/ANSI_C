#include <stdio.h>
int series(int n);

int main() {
	
	int n;
	scanf("%d", &n);
	int sum = series(n);
	printf(" = %d\n", sum);
	
	return 0;
}


int series(int n) {

	static int sum_series = 0, mul = 1;
	// BASE CALL
	if (n == 1) {
		printf("%d", n);
		return (sum_series+n);
	}

	// RECURSIVE CALL
	sum_series = series(n-1);
	if (n%2==0) {
		sum_series += mul * n;
		printf(" * %d", n);
	}
	else {

		sum_series += n;
		printf(" + %d", n);
	}
}