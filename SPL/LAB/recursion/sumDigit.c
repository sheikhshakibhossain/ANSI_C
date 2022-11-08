#include <stdio.h>
int sumOfDigits(int num);

int main() {
	
	int num;
	scanf("%d", &num);
	
	int sum = sumOfDigits(num);
	printf("Sum of digits: %d\n", sum);
	
	return 0;
}

int sumOfDigits(int num) {

	static int sum = 0;
	if (num==0)
		return sum;

	int digit =  num%10;
	return digit + sumOfDigits(num/10); // digit + sum of other digits
}