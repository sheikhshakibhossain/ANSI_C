#include <stdio.h>

void value(char ch) {
	printf("Value received from main: %c\n", ch);
}

int main() {
	
	char ch;
	scanf("%c", &ch);
	value(ch);
	
	return 0;
}

