#include <stdio.h>
#include <stdio.h>

int main() {

	// 8. count number of alphabets, digits and special characters in string
	char str[1000];
	gets(str);
	int i, alphabets, digits, specialChar;
	i = 0, alphabets = 0, digits = 0, specialChar = 0;
	while (str[i] != '\0') {
		str[i] = toupper(str[i]); // converting to a same catagory
		if (str[i] >= 'A' && str[i] <= 'Z')
			alphabets++;
		else if (str[i] >= '0' && str[i] <= '9')
			digits++;
		else
			specialChar++;

		i++;
	}
	printf("Alphabets: %d, Digits: %d, Special Characters: %d. \n", alphabets, digits, specialChar);



	return 0;
}

