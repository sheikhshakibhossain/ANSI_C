#include <stdio.h>

int main() {

	// 10. check alphabet digit special char.
	char ch;
	scanf("%c", &ch);
	if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
		printf("%c is a Alphabet ", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c is a Digit ", ch);
	else
		printf("%c is a Special Character ", ch);

	return 0;
}

