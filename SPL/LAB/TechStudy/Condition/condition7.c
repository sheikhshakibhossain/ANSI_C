#include <stdio.h>

int main() {

	// 7. positive negative or zero
	float num;
	scanf("%f", &num);
	if (num > 0)
		printf("positive");
	else if (num < 0)
		printf("negative");
	else
		printf("zero");

	return 0;
}

