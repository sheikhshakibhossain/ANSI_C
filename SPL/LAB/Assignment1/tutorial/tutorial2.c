#include <stdio.h>

int main() {
	
	// 2. Hollow Rectangular Star Pattern in C 
	int row,col;
	scanf("%d %d", &row, &col);
	
	for(int i=1; i<=row; i++) // OK
	{
		for(int j=1; j<=col; j++)
		{
			if (i==1 || i==row || j==1 || j==col) printf("*");
			else printf(" ");
		}
		printf("\n");
	}	
	
	return 0;
}

