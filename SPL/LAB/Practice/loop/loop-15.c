#include <stdio.h>
/* Write a program (WAP) that will reverse the digits of an input integer. */

int main() {
	
	int num;
	scanf("%d", &num);

	while (num != 0)
	{
		int digit = num % 10;
		printf("%d", digit);
		num/=10;
	}
	
	return 0;
}

