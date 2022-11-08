#include <stdio.h>

int main() {
	
	int x, y;
	scanf("%d %d", &x, &y);

	int *p;
	p = &x;
	int *q;
	q = &y;

	int temp = *p;
	*p = *q;
	*q = temp;
	printf("%d %d\n", x, y);
	
	return 0;
}
