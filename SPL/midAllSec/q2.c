#include <stdio.h>

int main() {
	
	int n, counter = 1;
	scanf("%d", &n);

	for (int i=1; i<=n; i++) // upper
	{
		for (int j=1; j<=i; j++)
		{
			if (counter>9) counter = 1;
			printf("%d", counter);
			counter++;
		}
		printf("\n");
	}
	
	for (int i=n-1; i>=1; i--) // lower
	{
		for (int j=1; j<=i; j++)
		{
			if (counter>9) counter = 1;
			printf("%d", counter);
			counter++;
		}
		printf("\n");
	}


	return 0;
}

