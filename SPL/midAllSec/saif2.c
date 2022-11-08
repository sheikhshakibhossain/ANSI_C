#include <stdio.h>
#include <string.h>

int main() {

	char str [100];
	gets(str);

	int sum = 0, len = strlen(str);

	for (int i=0; i<len; i++) {

		if ( str[i] >= '0' && str[i] <= '9' ) // char. is a digit
		{
			if (str[i-1] == '-') // digit er aga minus thakle, ok?
				sum -= str[i] - '0'; // ok, bro.
			else
				sum += str[i] - '0';  // sum += str[i] - 48
		}
	}

	printf("%d\n", sum);

	
	return 0;
}

