#include <stdio.h>

int main() {
	
	// 11. Right Arrow Star Pattern in C 
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		// space
		for (int k=1; k<=i-1; k++)
			printf("  ");
		// star
		for (int j=n; j>=i; j--)
			printf("*");
		
		printf("\n");
	}
	
	for (int i=2; i<=n; i++)
	{
		// space
		for (int k=n-1; k>=i; k--)
			printf("  ");
		// star
		for (int j=1; j<=i; j++)
		{
			printf("*");
		}


		printf("\n");
	}

	return 0;
}

