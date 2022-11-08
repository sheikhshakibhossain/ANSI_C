#include <stdio.h>

int main() {

	// 3. check largest among three using conditional op. / ternary op.
	float num1, num2, num3, largest;
	scanf("%f %f %f", &num1, &num2, &num3);
	largest = num1 > num2 ? num1 : (num2 > num3 ? num2 : num3);
	printf("%f is the largest \n", largest);

	return 0;
}

