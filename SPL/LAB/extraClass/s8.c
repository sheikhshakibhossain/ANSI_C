#include <stdio.h>
#include <ctype.h>
#define MAX 100

char* toggleString(char str[]) // returns the array
{
	int i = 0;
	while (str[i] != '\0')
	{
		if( isupper(str[i]) != 0 ) // if true
		{
			str[i] = tolower(str[i]); // OK
		}
		else
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return str; // OK
}

int main() 
{
	char str[MAX];
	fgets(str, MAX, stdin);
	char *ptr;
	ptr = toggleString(str); 
	puts(ptr); // puts pointer niyei kaj kore,, while loop er dorkar nai
	while (*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr++;
	}

	return 0;
}