#include <stdio.h>

void isEven(int n) {
	if (n%2==0)
		printf("even\n");
	else
		printf("odd\n");
}

int main() {
	
	int n;
	scanf("%d", &n);
	isEven(n); // OK
	
	return 0;
}

