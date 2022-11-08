#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	int len=0, i=0;
	while (str[i] != '\0') {
		len++;
		i++;
	}
	
	for (int i=0; i<len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	puts(str);

	return 0;
}

