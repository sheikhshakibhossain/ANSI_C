#include <stdio.h>

int main() {
	
	int x, y;
	scanf("%d %d", &x, &y);

	int *p = &x;
	int *q = &y;

	int sum = *p + *q;
	printf("%d\n", sum);
	
	return 0;
}
