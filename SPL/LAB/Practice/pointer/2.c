#include <stdio.h>

int main() {
	
	int x, y;
	scanf("%d %d", &x, &y);

	int *p;
	p = &x;
	int *q;
	q = &y;

	int max = *p > *q ? *p : *q;
	printf("%d\n", max);
	
	return 0;
}
