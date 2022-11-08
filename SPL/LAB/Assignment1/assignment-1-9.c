#include <stdio.h>

int main() {
	
	// 9. Half Diamond Star Pattern in C 
	int n;
	scanf("%d", &n);

	// first half
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=i; j++) printf("*");

		printf("\n");
	}

	// last half (reverse)
	for (int i=n-1; i>=1; i--)
	{
		for (int j=1; j<=i; j++) printf("*");

		printf("\n");
	}
	
	return 0;
}

