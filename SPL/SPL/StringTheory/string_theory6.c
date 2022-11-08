#include <stdio.h>

int main() {
	
	char str[100], rev[100];
	gets(str);

	int len = 0;
	while (str[len] != '\0') 
		len++;
	
	int k = 0;
	for (int i=len-1; i>=0; i--) {
		rev[k] = str[i];
		k++;
	}
	rev[k] = '\0';
	printf("%s", rev);
	
	return 0;
}

