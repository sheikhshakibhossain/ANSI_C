#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		// space
		for (int k=n-1; k>=i; k--)
			printf("  ");
		// first
		for (int j=i; j<=2*i-1; j++)
			printf("%d ", j);
		
		for (int k=2*i-2; k>=i; k--)
			printf("%d ", k);

		printf("\n");
	}
	
	return 0;
}

