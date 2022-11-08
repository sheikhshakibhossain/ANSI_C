#include <stdio.h>

int main() {

	// 10. count numbers of lowercase upper letters
	char str[1000];
	gets(str);
	int i, upper, lower;
	i = 0, upper = 0, lower = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <='Z')
			upper++;
		else if (str[i] >= 'a' && str[i] <='z')
			lower++;		
		
		i++;
	}
	printf("Upper case: %d, Lower case: %d \n", upper, lower);

	return 0;
}