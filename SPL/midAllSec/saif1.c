#include <stdio.h>
#include <string.h>

int main() {
	
	char str [100];
	gets(str); // scans the string

	int len = strlen(str);
	char rev[len];
	int k = len - 1;

	for (int i=0; i<len; i++) { // rev
		rev[k] = str[i];
		k--;
	}

	for (int i=0; i<len; i++) // output
		printf("%c", rev[i]);
	
	return 0;
}

