#include <stdio.h>
#include <string.h>

int main() {

	// 1. concatenate two strings
	char str1[1000], str2[1000];
	gets(str1);
	gets(str2);
	//strcat(str1,str2); // merges contents of string string2 to string1
	int i = 0;
	int len = strlen(str1);
	while (str2[i] != '\0') {
		str1[len] = str2[i]; // where str1 ends we start to put a character of str2 there.
		i++;
		len++;
	}
	printf("Concatenation of two strings is: %s \n", str1);

	return 0;
}

