#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main() {

	char str[MAX];
	fgets(str, MAX, stdin);
	int i = 0;
	while (str[i] != '\0')
	{
		if( isupper(str[i]) != 0 ) // if true
		{
			str[i] = tolower(str[i]);
		}
		printf("%c", str[i]);
		i++;
	}

	return 0;
}
