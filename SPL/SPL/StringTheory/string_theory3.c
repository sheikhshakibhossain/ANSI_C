#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[100], str2[100];
	gets(str1);
	gets(str2);

	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = len1 + len2;
	char str3[len3];

	int i = 0;
	for (i=0; i<len1; i++)
		str3[i] = str1[i];

	for (i; i < len3; i++)
		str3[i] = str1[i];
	str3[i] = '\0';

	printf("%s", str3);
	
	return 0;
}

