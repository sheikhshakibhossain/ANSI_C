#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	char *ptr;
	ptr = &str[0];

	int len = 0;
	while ( *ptr != '\0' ) {
		len++;
		ptr++;
	}
	printf("%d", len);

	return 0;
}
