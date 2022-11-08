#include <stdio.h>

int main() {
	
	const int a = 21;
	printf("constant a = %d\n", a);

	int *ptr;
	ptr = &a;

	int change;
	scanf("%d", &change);
	*ptr = change;
	printf("constant a = %d\n", a);
	
	return 0;
}