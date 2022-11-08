#include <stdio.h>
#include <math.h>
int binaryToDecimal (int binary);

int main() {
	
	int n, decimal;
	scanf("%d", &n);
	decimal = binaryToDecimal(n);
	printf("%d\n", decimal);
	
	return 0;
}


int binaryToDecimal (int binary) {
	int i=0, decimal=0;
	while (binary != 0) {
		int digit = binary % 2;
		binary /= 10;
		decimal = decimal + digit*pow(2,i);
		i++;
	}
	return decimal;
}