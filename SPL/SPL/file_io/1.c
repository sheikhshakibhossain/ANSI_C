#include <stdio.h>

int main() 
{
	FILE *fp;
	fp = fopen("test.txt", "a"); // append,,, adds news things in a file,,, if doesnt exist, creates it

	if ( fp == NULL ) {
		printf("Error\n");
		return -1;
	}
	fclose(fp);

	return 0;
}
