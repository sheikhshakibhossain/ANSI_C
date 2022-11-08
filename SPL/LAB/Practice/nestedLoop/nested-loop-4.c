#include <stdio.h>

int main() {
	
	int n, counter;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		counter = i;
		for (int j=1; j<=i; j++)
		{
			printf("%d", counter);
			counter++;
		}
		printf("\n");
	}
	
	
	return 0;
}

