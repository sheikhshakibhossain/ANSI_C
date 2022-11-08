#include <stdio.h>

int sum_of_natural(int limit) // 1 to N
{
	if (limit == 1) {
		return 1;
	}
	return limit + sum_of_natural(limit - 1);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int sum = sum_of_natural(n);
	printf("%d\n", sum);

	return 0;
}
