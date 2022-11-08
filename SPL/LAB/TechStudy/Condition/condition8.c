#include <stdio.h>

int main() {

	// 8. check upper or lower
	char ch;
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z')
		printf("%c is lower case", ch);
	else if (ch >= 'A' && ch <= 'Z')
		printf("%c is upper case", ch);
	else
		printf("Invalid input");

	return 0;
}

