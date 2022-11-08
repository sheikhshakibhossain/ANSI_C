#include <stdio.h>

int pow(int x, int y) {
	int power = 1;
	for (int i=1; i<=y; i++)
		power *= x;

	return power;
}

int main() {
	
	int a,b;
	scanf("%d %d", &a, &b);
	int result = pow(a,b);
	printf("%d\n", result);
	
	return 0;
}

