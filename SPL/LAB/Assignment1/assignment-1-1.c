#include <stdio.h>

int main() {

	//1. Solid Rectangular Star Pattern in C 
	int row,col;
	scanf("%d %d", &row, &col);
	
	for(int i=1; i<=row; i++)
	{
		for(int j=1; j<=col; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

