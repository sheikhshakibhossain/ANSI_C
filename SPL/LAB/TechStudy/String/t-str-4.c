#include <stdio.h>
#include <stdio.h>

int main() {

	// 4. convert string to upper case
	char string[1000];
   	printf("Input a string to convert to upper case\n");
   	gets(string);
   	printf("Characters in upper case: \"%s\"\n",strupr(string));

	return 0;
}

