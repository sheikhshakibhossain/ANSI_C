#include <stdio.h>

int power (int base, int exp)
{
	if (exp == 1) {
		return base;
	}
	return base * power(base, exp-1);
}

int main() {
	
	int x, y;
	scanf("%d %d", &x, &y);

	int pow1 = power(x, y);
	printf("%d\n", pow1);
	
	return 0;
}
