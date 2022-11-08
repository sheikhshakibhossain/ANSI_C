#include <stdio.h>

int main() {
	
	char str1[100], str2[100];
	gets(str1);
	gets(str2);

	int i=0;
	while (str1[i] != '\0')
		i++;
	
	int j=0;
	while (str2[j] != '\0') {

		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	printf("%s", str1);
	
	return 0;
}

