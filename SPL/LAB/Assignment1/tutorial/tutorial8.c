#include <stdio.h>

int main() {
	
	// 21. Floyd's Triangle in C 
	int n, pos=1;
	scanf("%d", &n);

	for (int i=1; i<=n; i++) // OK
	{
		for (int j=1; j<=i; j++)
		{
			printf("%d ", pos);
			pos++;
		}
		
		printf("\n");
	}
	
	return 0;
}

