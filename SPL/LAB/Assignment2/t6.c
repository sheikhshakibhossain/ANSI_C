#include <stdio.h>
int stringLenth (char *str); // OK

int main() {
	
	char string[100];
	//gets(string);
	scanf("%[^\n]s", string);
	int len = stringLenth(string);
	printf("%d\n", len);
	
	return 0;
}

int stringLenth (char *str) {
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}


