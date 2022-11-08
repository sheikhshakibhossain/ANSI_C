#include <stdio.h>
# define MAX 100

int main() {
	
	char str[MAX];
	gets(str);

	int len = 0;
	char *ptr;
	ptr = str;
	while ( *ptr != '\0' ) {
		len++;
		ptr++;
	}
	printf("%d\n", len);
	
	return 0;
}
