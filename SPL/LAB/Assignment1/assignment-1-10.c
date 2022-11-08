#include <stdio.h>

int main() {
	
	// 10. Solid Full Diamond Pattern in C 
	int n; 
	scanf("%d", &n);
	n = n / 2 + 1;
	
	// first half
	for (int i=1; i<=n+1; i++)
	{
		// space
		for (int k=n; k>=i; k--)
			printf(" ");
		// star
		for (int j=1; j<=2*i-1; j++)
			printf("*");
		// new line
		printf("\n");
	}

	// second half
	for (int i=n; i>=1; i--)
	{
		// space
		for (int k=n; k>=i; k--)
			printf(" ");
		// star
		for (int j=1; j<=2*i-1; j++)
			printf("*");
		// new line
		printf("\n");
	}
	
	return 0;
}

