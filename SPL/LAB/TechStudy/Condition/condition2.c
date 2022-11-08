#include <stdio.h>

int main() {

	// 2. check largest among three
	float num1, num2, num3;
	scanf("%f %f %f", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
		printf("%f is largest", num1);
	else if (num2 > num1 && num2 > num3)
		printf("%f is largest", num2);
	else 
		printf("%f is largest", num3);

	return 0;
}

