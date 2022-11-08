#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	n = n / 2 + 1;

	// first
	for (int i=n; i>=1; i--)
	{
		for (int k=n-1; k>=i; k--) // first under_score
			printf("_");

		for (int j=1; j<=2*i-1; j++) // star
		{
			if (j==1 || j==2*i-1)
				printf("*");
			else
				printf("_");
		}

		for (int k=n-1; k>=i; k--) // last under_score
			printf("_");


		printf("\n");
	}

	// last
	for (int i=2; i<=n; i++)
	{
		for (int k=n-1; k>=i; k--) // first under_score
			printf("_");

		for (int j=1; j<=2*i-1; j++) // star
		{
			if (j==1 || j==2*i-1)
				printf("*");
			else
				printf("_");
		}

		for (int k=n-1; k>=i; k--) // last under_score
			printf("_");


		printf("\n");
	}
	
	return 0;
}

