#include <stdio.h>

int main() {

	char a[5] = "hello";
	int size = sizeof(a);
	int len = 5;
	printf("len = %d   size = %d\n", len, size);

	return 0;
}