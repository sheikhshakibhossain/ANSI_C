#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	int words = 1, i=0;
	while (str[i] != '\0') 
	{
		if (str[i] == ' ')
			words++;
		i++;
	}
	printf("%d\n", words);
	
	return 0;
}

