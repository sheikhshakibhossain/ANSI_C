#include <stdio.h>
int series(int n, int mul);

//int sum = 0;
int main() {
	
	int n;
	scanf("%d", &n);
	int result = series(n, 0);
	printf(" = %d\n", result);
	
	return 0;
}


int series(int n, int mul) {

	static int sum = 0;
	int chk;
	// BASE CALL
	if (n == 1) {
		mul = n;
		printf("%d", n);
		return mul;
	}

	// RECURSIVE CALL
	chk = series(n-1, 0);
	if (n%2==0) {
		mul = chk * n;
		sum += mul;
		printf(" * %d", n);
	}
	else {
		mul = n;
		printf(" + %d", n);
	}

	return mul;
}