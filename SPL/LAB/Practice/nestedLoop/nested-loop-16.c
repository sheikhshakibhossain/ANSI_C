#include <stdio.h>

int main() {
	
	int n, counter = 0;
	scanf("%d", &n);

	for (int i=1; i<=n; i++) 
	{
		for (int j=1; j<=n; j++)
		{
			if (counter == 0) // switching the variable
				counter = 1;
			else 
				counter = 0; 

			printf("%d", counter);
		}
		printf("\n");
	}
	
	return 0;
}

