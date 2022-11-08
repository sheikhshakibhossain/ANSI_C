#include <stdio.h>
#include <string.h>

int main() {

	// 6. convert string to lowercase without strlwr
	char str[1000];
	gets(str);
	int i = 0;
	while (str[i] != '\0') {
			str[i] = tolower(str[i]);
			i++;
	}
	printf("Lower case form: %s \n", str);

	return 0;
}

