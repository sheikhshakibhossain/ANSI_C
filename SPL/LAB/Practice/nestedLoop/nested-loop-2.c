#include <stdio.h>

int main() {
	
	int n, counter=1;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		counter = i;
		for (int j=1; j<=n; j++)
		{
			printf("%d", counter);
			counter++;
		}
		printf("\n");
	}
	
	return 0;
}

