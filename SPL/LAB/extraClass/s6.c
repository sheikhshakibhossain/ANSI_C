#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main() {

	char str[MAX];// = "Akib Zaman";
	fgets(str, MAX, stdin);
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
		printf("%c", str[i]);
		i++;
	}
	// char a[]= "Hi";
	// printf("%d %d", isupper(a[0]), isupper(a[1])); // OUT: 256 0

	return 0;
}