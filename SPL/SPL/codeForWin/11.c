#include <stdio.h>

void printNatural(int limit) // 1 to N
{
	if (limit == 1) {
		printf("%d ", limit);
		return;
	}
	printNatural(limit - 1);
	printf("%d ", limit);
}

int main() {
	
	int n;
	scanf("%d", &n);
	printNatural(n);

	return 0;
}
