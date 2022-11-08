#include <stdio.h>

int main() {
	
	//3. Half Pyramid Star Pattern in C 
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

