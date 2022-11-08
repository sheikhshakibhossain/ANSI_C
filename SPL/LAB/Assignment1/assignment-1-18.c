#include <stdio.h>

int main() {
	
	// 18. Solid Mirrored Rhombus Pattern in C 
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		// space
		for (int k=1; k<=i; k++)
		{
			if (k != 1)
				printf(" ");
		}
		// box star
		for (int j=1; j<=n; j++)
			printf("*");
		
		printf("\n");
	}
	
	return 0;
}

