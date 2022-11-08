#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	char match;
	scanf("%c", &match);
	match = tolower(match);

	int count = 0, i=0;
	while (str[i] != '\0') {
		if ( tolower(str[i]) == match ) {
			count++;
		}
		i++;
	}
	printf("%d\n", count);
	
	return 0;
}

