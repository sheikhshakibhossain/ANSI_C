#include <stdio.h>
void sum();

int main() {
	
	sum();
	//printf("%d", x);
	return 0;
}

void sum() {
	int a, b, x;
	scanf("%d %d", &a, &b);
	x = a+b;
	printf("%d\n", x);
}