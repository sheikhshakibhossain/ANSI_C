#include <stdio.h>

int main() {

	char str[32];
	fgets(str, sizeof(str), stdin);
	int i = 0;
	while ( str[i] != '\0' )
	{
		printf("%c", str[i]);
		i++;
	}
	return 0;
}