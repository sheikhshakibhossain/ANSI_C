#include <stdio.h>
#define max 100 

int main() {
	
	char str1[max], str2[max];
	gets(str1);
	gets(str2);

	char *p = str1;
	char *q = str2;

	while ( *p != '\0') p++; // at last p last element er porer addr niye ber hobe
	while ( *q != '\0' ) {
		*p = *q; // coping str2 to end of str2
		p++;
		q++;
	}

	puts(str1);
	//puts(str2);

	return 0;
}