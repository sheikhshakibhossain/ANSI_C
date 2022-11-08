#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	int i = 0, sum = 0;
	while (str[i] != '\0') {
		if ( str[i] >= '0' && str[i] <= '9' ) {
			sum += str[i] - 48;
		}
		i++;
	}
	printf("%d\n", sum);
	
	return 0;
}

