#include <stdio.h>

int sum_of_digits(int num)
{
	static int sum_of_digits_temp = 0;
	int digit = num % 10;
	sum_of_digits_temp  += digit;
	if (num == 0) {
		return sum_of_digits_temp;
	}
	sum_of_digits(num/10); 
}

int main() {
	
	int n;
	scanf("%d", &n);
	int sum = sum_of_digits(n);
	printf("%d\n", sum);
	
	return 0;
}
