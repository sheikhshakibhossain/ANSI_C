#include <stdio.h>
void removeAlphabet(char *str, char alphabet);

int main() {
	
	char hello[12] = "Hello World!";
	printf("\nlength inside main: %d\n", sizeof(hello)); // 12
	printf("Before: %s\n", hello);

	removeAlphabet(hello, 'l');
	printf("After: %s\n", hello);
	
	return 0;
}

void removeAlphabet(char *str, char alphabet) {

	printf("\nlength inside functon: %d\n", sizeof(str)); /* 8 but it was meant to be either 12 or 1
	hello[0] is one element */
	int len = sizeof(str) / sizeof(str[0]);
	//printf("\n%d %d %d\n", sizeof(str), sizeof(str[0]), len);
	for (int i=0; i<len; i++) {
		if ( alphabet == str[i] )
			str[i] = '*';
	}
}

