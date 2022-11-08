#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	int len = 0;
	while (str[len] != '\0')
		len++;
	
	for (int i=0; i < len-1; i++) {
		for (int j=i+1; j<len; j++) {
			if (str[i] > str[j]) {
				char temp = str [i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	printf("%s", str);
	
	return 0;
}

