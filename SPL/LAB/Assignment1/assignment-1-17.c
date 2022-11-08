#include <stdio.h>

int main() {
	
	// 17. Hollow Rhombus Star Pattern in C 
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		//space
		for (int k=n-1; k>=i; k--)
			printf(" ");
		// box star
		for (int j=1; j<=n; j++)
		{
			if (i==1 || i==n || j==1 || j==n)
				printf("*");
			else
				printf(" ");
		}
		
		printf("\n");


	}
	
	
	return 0;
}

