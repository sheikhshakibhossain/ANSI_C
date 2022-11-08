#include <stdio.h>

int main() {
	
	// 13. Plus Star Pattern in C 
	int n, pos;
	scanf("%d", &n);
	if (n%2==0)
		pos = n/2;
	else
		pos = n/2 + 1;

	for (int i=1; i<=n; i++) 
	{
		for (int j=1; j<=n; j++)
		{
			if ( i == pos || j == pos ) 
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	
	return 0;
}

