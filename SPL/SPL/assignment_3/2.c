#include <stdio.h>

int main() 
{
	int upperCase = 0;
	char sentence[100];
	fgets(sentence, 100, stdin);

	char *ptr;
	ptr = sentence;

	while (*ptr != '\0')
	{
		if ( *ptr >= 'A' && *ptr<='Z' ) {
			upperCase++;
		}
		ptr++;
	}

	if ( upperCase%2 !=0 ) {
		printf("Sheikh Shakib Hossain");
	}
	else {
		printf("011221031");
	}

	return 0;
}