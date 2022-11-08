#include <stdio.h>

int main() {
	
	char str1[100], str2[100];
	gets(str1);

	char *p = str1;
	char *q = str2;

	while ( *p != '\0' ) {

		*q = *p;
		p++;
		q++;
	}
	puts(str2);
	
	return 0;
}
