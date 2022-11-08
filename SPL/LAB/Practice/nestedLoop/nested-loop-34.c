#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if ( j==1 || j==n || i==n/2+1 )
				printf("H ");
			else 
				printf("  ");
		}
		printf("\n");
	}
	
	return 0;
}

