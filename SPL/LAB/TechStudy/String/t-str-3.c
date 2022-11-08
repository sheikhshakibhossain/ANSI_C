#include <stdio.h>
#include <string.h>

int main() {

	// 3. convert string to lower case
	char string[1000];
   	printf("Input a string to convert to lower case\n");
   	gets(string);
   	printf("Characters in lower case: \"%s\"\n",strlwr(string));

	return 0;
}

