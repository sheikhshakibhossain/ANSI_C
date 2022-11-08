#include <stdio.h>

int sum_even_odd(int r1, int r2) // 1 2 3 4 5 -> 1 3 5 == 9 // 2 3 4 5 6 -> 2 4 6 == 12
{
	if (r1 > r2) {
		return 0;
	}
	return r1 + sum_even_odd(r1+2, r2);
}

int main() {
	
	int r1, r2;
	scanf("%d %d", &r1, &r2);
	int sum = sum_even_odd(r1, r2);
	printf("%d\n", sum);
	
	return 0;
}
