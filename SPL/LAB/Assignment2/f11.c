#include <stdio.h>

int strlen(char string[]) {
	int len = 0;
	while (string[len] != '\0')
		len++;
	
	return len;
}

int main() {
	
	char str[100];
	gets(str);
	int len = strlen(str);
	printf("%d\n", len); // OK
	
	return 0;
}

