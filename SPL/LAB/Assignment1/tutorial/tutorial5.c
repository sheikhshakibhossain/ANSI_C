#include <stdio.h>

int main() {
	
	// 14. X Pattern in C
	int n;
	scanf("%d", &n);

	for (int i=n; i>=1; i--) // OK
	{
		// space
		for (int k=n-1; k>=i; k--)
			printf(" ");
		// star
		for (int j=1; j<=2*i-1; j++)
		{
			if (j==1 || j==2*i-1)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	} 

	for (int i=2; i<=n; i++)
	{
		// space
		for (int k=n-1; k>=i; k--)
			printf(" ");
		// star
		for (int j=1; j<=2*i-1; j++)
		{
			if (j==1 || j==2*i-1)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	} 
	
	return 0;
}

