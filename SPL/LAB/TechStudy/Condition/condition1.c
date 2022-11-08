#include <stdio.h>

int main() {

	// 1. check if it's even or odd
	int num;
	scanf("%d", &num);
	if (num%2 == 0)
		printf("even");
	else
		printf("odd");

	return 0;
}

