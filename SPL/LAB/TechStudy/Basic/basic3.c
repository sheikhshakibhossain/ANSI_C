#include <stdio.h>

int main() {

	// 3. swap two values
	int num1,num2,temp;
	scanf("%d %d", &num1, &num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Swapped value: num1 = %d, num2 = %d \n", num1, num2);

	return 0;
}

