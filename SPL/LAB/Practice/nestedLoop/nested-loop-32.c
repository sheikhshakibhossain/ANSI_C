#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	n = n / 2 + 1;

	// first
	for (int i=1; i<=n; i++)
	{
		for (int k=n-1; k>=i; k--) //left
			printf("_");

		for (int j=1; j<=2*i-1; j++)
		{
			if (i==n || j==1 || j==2*i-1 || j==i)
				printf("$");
			else
				printf("_");
		}

		for (int k=n-1; k>=i; k--) //right
			printf("_");

		printf("\n");
	}

	// last
	for (int i=n-1; i>=1; i--)
	{
		for (int k=n-1; k>=i; k--) //left
			printf("_");

		for (int j=1; j<=2*i-1; j++)
		{
			if (i==n || j==1 || j==2*i-1 || j==i)
				printf("$");
			else
				printf("_");
		}

		for (int k=n-1; k>=i; k--) //right
			printf("_");

		printf("\n");
	}
	
	return 0;
}

