#include <stdio.h>

int main() {
	
	int n, first=1, second=1, third;
	scanf("%d", &n);
	printf("%d, %d, ", first, second);
	for (int i=3; i<=n; i++)
	{
		third = first + second;
		first = second;
		second = third;
		printf("%d", third);
		if (i != n)
			printf(", ");
	}

	return 0;
}

