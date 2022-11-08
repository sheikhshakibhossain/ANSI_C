#include <stdio.h>

int main() {
	
	int num, isPrime = 1;
	scanf("%d", &num);

	for (int i=2; i<=num/2; i++)
	{
		if (num%i == 0) {
			isPrime = 0;
			break;
		}
	}
	
	if (num != 1 && isPrime == 1)
		printf("Prime\n");
	else
		printf("Not Prime\n");
	
	return 0;
}

