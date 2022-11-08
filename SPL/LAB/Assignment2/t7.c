#include <stdio.h>
int isStrong (int num); // OK
int factorial (int num);

int main() {
	
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	for (int i=n1; i<=n2; i++) 
	{
		if ( isStrong(i) == i ) // num == sum of fac(digit)
			printf("%d ", i);
	}
	
	return 0;
}

int factorial (int num) {
	int fac = 1;
	for (int i=1; i<=num; i++) {
		fac *= i;
	}
	return fac;
}

int isStrong (int num) {
	int result = 0;
	while (num != 0) {
		int digit = num % 10;
		num /= 10;
		result += factorial(digit);
	}
	return result;
}

