#include <stdio.h>

int main() {

	int x,y,power=1;
	scanf("%d %d", &x, &y);

	for (int i=1; i<=y; i++)
		power *= x;

	printf("%d\n", power);

	return 0;
}

