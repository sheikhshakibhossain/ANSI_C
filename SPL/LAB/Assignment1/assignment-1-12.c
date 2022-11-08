#include <stdio.h>

int main() {
	
	// 11. Right Arrow Star Pattern in C 
	int n;
	scanf("%d", &n);

	for (int i=n; i>=1; i--)
	{
		// space
		for (int k=1; k<=i; k++)
			printf(" ");
		// star
		for (int j=1; j<=i; j++)
			printf("*");
		
		printf("\n");
	}

	// reverse
	for (int i=2; i<=n; i++) 
	{
		// space
		for (int k=1; k<=i; k++)
			printf(" ");
		// star
		for (int j=1; j<=i; j++)
			printf("*");
		
		printf("\n");
	}
	
	
	return 0;
}

