#include <stdio.h>

int main() {

	// 5. All arithmetic op.
	float num1, num2;
	scanf("%f %f", &num1, &num2);
	printf("Addition = %f \n", num1+num2);
	printf("Multiplication = %f \n", num1*num2);
	printf("Division = %f \n", num1/num2);
	printf("Modulus/Remainder = %d \n", (int)num1 % (int)num2);

	return 0;
}

