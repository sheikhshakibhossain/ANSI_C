#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	char str[n], cpy[n];
	gets(str);
	char *p = str;
	char *q = cpy;

	while ( *p != '\0' ) {
		*q = *p; // copy copy copy,,, bujla bro?
		p++; // moving both pointers to next memory block
		q++;
	}
	printf("%s\n", cpy);

	return 0;
}