#include <stdio.h>
int decimalToBinary (int decimal);

int main() {
	
	int n, binary=0;
	scanf("%d", &n);
	binary = decimalToBinary(n);
	printf("%d\n", binary);
	
	return 0;
}


int decimalToBinary (int decimal) {
	int i=1, binary=0;
	while (decimal != 0) {
		int digit = decimal % 2;
		decimal /= 2;
		binary += digit*i;
		i *= 10;
	}
	return binary;
}