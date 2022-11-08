#include <stdio.h>

int main() {
	
	//  16. Solid Rhombus Star Pattern in C 
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		//space
		for (int k=n-1; k>=i; k--)
			printf(" ");
		// box star
		for (int j=1; j<=n; j++)
			printf("*");
		
		printf("\n");


	}
	
	return 0;
}

