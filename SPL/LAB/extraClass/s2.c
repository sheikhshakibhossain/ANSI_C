#include <stdio.h>

int main() {

	int size = 16;
	char str[size];
	scanf("%s", str);
	printf("%s\n", str);

	fgets(str, size, stdin);
	puts(str);

	return 0;
}
