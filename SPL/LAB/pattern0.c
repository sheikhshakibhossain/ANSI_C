#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	// for (int i=1; i<=n; i++) // square
	// {
	// 	for (int j=1; j<=n; j++) 
	// 		printf("* ");
	// 		//printf("%d%d ", i,j);

	// 	printf("\n");
	// }

	// for (int i=1; i<=n; i++) // right triangle
	// {
	// 	for (int j=1; j<=i; j++) 
	// 		printf("* ");
	// 		//printf("%d%d ", i,j);

	// 	printf("\n");
	// }

	// for (int i=1; i<=n; i++) // hollow right triangle
	// {
	// 	for (int j=1; j<=n; j++) 
	// 	{
	// 		if (i==j || j==1 || i==n)
	// 			printf("*");
	// 		else
	// 			printf(" ");
	// 	}

	// 	printf("\n");
	// }
	
	for (int i=1; i<=n; i++) // triangle | algorithm: 2i - 1 | space: n - i
	{
		// space print
		for (int j=1; j<=n; j++)
			printf(" ");
		
		// star print
		

		printf("\n");
	}

	return 0;
}

