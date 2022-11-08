#include <stdio.h>
#include <string.h>

int main() {

	// 9. compare two strings using strcmp | c lang is case sensitive
	char str1[1000], str2[1000];
	gets(str1);
	gets(str2);
	if (strcmp(str1, str2) == 0) // why? Zero represents false, right?
		printf("strings are equal");
	else
		printf("strings are not equal");

	return 0;
}

