#include <stdio.h>
#include <string.h>

int main() {

	// 2. find string length
	char str[1000];
	gets(str);
	int length = 0;
	int i = 0;
	while (1) {
		if(str[i] == '\0') { // checking index | last char of string is '\0'
			break;
		}
		else {
			length++;
			i++;
		}

	}
	printf("string length = %d \n", length);
	printf("string length with strlen = %d \n", strlen(str));

	return 0;
}

