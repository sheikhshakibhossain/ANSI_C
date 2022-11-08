#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	int vowel = 0, i=0;
	while (str[i] != '\0') 
	{
		char ch = tolower(str[i]);
		if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			vowel++;
		i++;
	}
	printf("%d\n", vowel);
	
	return 0;
}

