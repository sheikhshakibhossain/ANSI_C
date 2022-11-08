#include <stdio.h>
#include <math.h>
int isArmstrong(int num);
int numOfDigit(int num);

int main() {
	
	int n;
	scanf("%d", &n); 

	int x = isArmstrong(n); // OK
	if ( x == n )
		printf("%d is armstrong", n);
	else 
		printf("%d is not armstrong", n);
	
	return 0;
}

int numOfDigit(int num) {
	int digit = 0;
	while (num != 0) {
		num /= 10;
		digit++;
	}
	return digit;
}

int isArmstrong(int num) { // 123 == 1^3 + 2^3 + 3^3

	int sum = 0;
	int x = numOfDigit(num);
	while (num != 0) {
		int digit = num % 10;
		int power = pow(digit, x);  // x^y == 2^3 == 8
		sum += power;
		num /= 10;
	}
	return sum;
}
