#include <stdio.h>

int main() {
	
	int x, y;
	scanf("%d %d", &x, &y);

	int *p = &x;
	int *q = &y;

	int temp = *p;
	*p = *q;
	*q = temp;
	printf("%d %d", x, y);
	
	return 0;
}
