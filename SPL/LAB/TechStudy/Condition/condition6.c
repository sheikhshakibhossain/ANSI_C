#include <stdio.h>

int main() {

	// 6. check alphabet
	char input;
	scanf("%c", &input);
	if ( (input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z') )
		printf("%c is a character ", input);
	else
		printf("%c is not a character ", input);

	return 0;
}

