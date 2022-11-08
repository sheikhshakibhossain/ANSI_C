#include <stdio.h>
int power(int x, int y);

int main() {
	
	int base, pow;
	printf("Input base number: ");
	scanf("%d", &base);

	printf("Input power: ");
	scanf("%d", &pow);
	
	int result = power(base, pow);
	printf("%d ^ %d = %d\n", base, pow, result);

	return 0;
}

int power(int x, int y) {

	if (y==1)
		return x;

	return x * power(x, y-1);
}