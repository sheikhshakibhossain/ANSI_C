#include <stdio.h>
void value(char ch);

int main() {
	
	char ch;
	scanf("%c", &ch);
	value(ch); // OK
	
	return 0;
}


void value(char ch) {
	printf("Value received from main: %c\n", ch);
}
