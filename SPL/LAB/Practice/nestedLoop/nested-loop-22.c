#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	n = n / 2 + 1;

	for (int i=1; i<=n; i++)
	{
		for (int k=i; k<=n-1; k++)
			printf("_");
		
		for (int j=1; j<=2*i-1; j++)
			printf("*");

		printf("\n");
	}

	for (int i=n-1; i>=1; i--) // last
	{
		for (int k=i; k<=n-1; k++)
			printf("_");
		
		for (int j=1; j<=2*i-1; j++)
			printf("*");

		printf("\n");
	}
	
	return 0;
}

