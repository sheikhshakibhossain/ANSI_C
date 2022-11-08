#include <stdio.h>
# define MAX 100

int main() {
	
	char str[MAX];
	gets(str);

	int vowel = 0, consonant = 0;
	char *ptr;
	ptr = str;
	while ( *ptr != '\0' ) 
	{
		char ch = tolower(*ptr);
		if ( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
			vowel++;
		else
			consonant++;

		ptr++;
	}
	printf("Vowel: %d\nConsonant: %d\n", vowel, consonant);
	
	return 0;
}