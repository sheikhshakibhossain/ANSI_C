#include <stdio.h>
#include <string.h>

int main() {

	// 5. convert string to upper case without strupr
	char str[1000];
	gets(str);
	int i = 0;
	while (str[i] != '\0') {
		str[i] = toupper(str[i]);
		i++;
	}
	printf("Upper case of the string: %s \n", str);

	return 0;
}

