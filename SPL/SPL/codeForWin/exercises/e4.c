#include <stdio.h>

int sum_of_digits(int n)
{
	int digit = n % 10;
	if (n==0) {
		return 0;
	}
	return digit + sum_of_digits(n/10);
}

int main() {
	
	int num;
	scanf("%d", &num);

	int sum = sum_of_digits(num);
	printf("%d\n", sum);
	
	return 0;
}
