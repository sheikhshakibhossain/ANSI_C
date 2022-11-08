#include <stdio.h>
#include <string.h>
#include <ctype.h>  // why? toupper & tolower

int main() {  // problem in ques 3,4 and 9
	
	// 1. concatenate two strings
	char str1[1000], str2[1000];
	gets(str1);
	gets(str2);
	//strcat(str1,str2); // merges contents of string string2 to string1
	int i = 0;
	int len = strlen(str1);
	while (str2[i] != '\0') {
		str1[len] = str2[i]; // where str1 ends we start to put a character of str2 there.
		i++;
		len++;
	}
	printf("Concatenation of two strings is: %s \n", str1);


	// 2. find string length
	char str[1000];
	gets(str);
	int length = 0;
	int i = 0;
	while (1) {
		if(str[i] == '\0') { // checking index | last char of string is '\0'
			break;
		}
		else {
			length++;
			i++;
		}

	}
	printf("string length = %d \n", length);
	printf("string length with strlen = %d \n", strlen(str));


	// 3. convert string to lower case |copy code from website but doesn't work |microsoft library not c standard
	char string[1000];
   	printf("Input a string to convert to lower case\n");
   	gets(string);
   	printf("Characters in lower case: \"%s\"\n",strlwr(string));
 

	// 4. convert string to upper case | copy code from website but doesn't work
	char string[1000];
   	printf("Input a string to convert to upper case\n");
   	gets(string);
   	printf("Characters in upper case: \"%s\"\n",strupr(string));


	// 5. convert string to upper case without strupr
	char str[1000];
	gets(str);
	int i = 0;
	while (str[i] != '\0') {
		str[i] = toupper(str[i]);
		i++;
	}
	printf("Upper case of the string: %s \n", str);


	// 6. convert string to lowercase without strlwr
	char str[1000];
	gets(str);
	int i = 0;
	while (str[i] != '\0') {
			str[i] = tolower(str[i]);
			i++;
	}
	printf("Lower case form: %s \n", str);


	// 7. reverse a string
	char str[1000], reverse[1000];
	gets(str);
	int i = 0;
	int len = strlen(str) - 1; // last index. so, len - 1.
	while (str[i] != '\0') {
		reverse[len] = str[i];
		len--; // str 1st index reverse last index. And so on ...
		i++;
	}
	printf("Reverse of %s :\n%s", str, reverse);


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


	// 9. compare two strings using strcmp | c lang is case sensitive
	char str1[1000], str2[1000];
	gets(str1);
	gets(str2);
	if (strcmp(str1, str2) == 0) // why? Zero represents false, right?
		printf("strings are equal");
	else
		printf("strings are not equal");

	
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

