#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	char *p;
	p = str;

	int len = 0;
	while(*p != '\0') { // while(*(p++) != '\0')     website a erokom dewa chilo... keno jano bro?
		len++;
		p++; // moving pointer to next index
	}
	printf("%d\n", len);

	return 0;
}