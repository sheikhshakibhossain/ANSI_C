#include <stdio.h>
int strLen (char str[]);

int main() {

	char str1[100], str2[100];
	gets(str1);
	gets(str2);
	int len1 = strLen(str1);
	int len2 = strLen(str2);
	char concate[len1+len2];
	//printf("%d %d", len1, len2);

	char *p = str1;
	char *q = str2;
	char *z = concate;

	while ( *p != '\0' ) { // coping str1 to concate
		*z = *p;
		p++;
		z++;
	} 
	while ( *q != '\0' ) { // coping str2 to concate
		*z = *q;
		q++;
		z++;
	}
	*z = '\0'; // ending concate string
	printf("%s\n", concate);

	return 0;
}

int strLen (char str[]) {
	int len = 0;
	while ( str[len] != '\0' )
		len++;
	
	return len;
}