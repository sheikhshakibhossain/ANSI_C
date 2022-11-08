#include <stdio.h>
#include <string.h>

int main() {

	// 7. reverse a string
	char str[1000], reverse[1000];
	gets(str);
	int i = 0;
	int len = strlen(str) - 1; // last index. so, len - 1.
	while (str[i] != '\0') {
		reverse[len] = str[i];
		len--; // str 1st index reverse last index. And so on ...
		i++;
	}
	printf("Reverse of %s :\n%s", str, reverse);

	return 0;
}

