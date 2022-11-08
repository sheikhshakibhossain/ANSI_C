#include <stdio.h>

int main() {

	// 4. largest among 3 var. using nested if;
	float num1, num2, num3;
	scanf("%f %f %f", &num1, &num2, &num3);
	if (num1 > num2) {
		if (num1 > num3)
			printf("%f is largest", num1);
	}
	else {
		if (num2 > num3)
			printf("%f is largest", num2);
		else if (num2 != num3);
			printf("%f is largest", num3);
	}

	return 0;
}

