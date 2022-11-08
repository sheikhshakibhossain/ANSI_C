#include <stdio.h>

int main() {
	
	//4. Inverted Half Pyramid Pattern in C 
	int n;
	scanf("%d", &n);
	
	for(int i=n; i>=0; i--)
	{
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

