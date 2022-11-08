#include <stdio.h>

int main() {
	
	//15. The Diagonal Hollow Square Pattern in C 
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if (i==1 || i==n || j==1 || j==n || i==j || j==n-i+1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}

