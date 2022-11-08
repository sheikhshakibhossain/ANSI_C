#include <stdio.h>

int main() {
	
	//19. Hollow Mirrored Rhombus Star Pattern 
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++) // OK
	{
		// space
		for (int k=1; k<=i; k++)
		{
			if (k != 1)
				printf(" ");
		}
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

