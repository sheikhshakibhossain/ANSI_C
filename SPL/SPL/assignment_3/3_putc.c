#include <stdio.h>

int main() 
{
	FILE *fp;
	fp = fopen("accounts.txt", "r");
	if (fp == NULL) {
		printf("file doesnt exists\n");
		return -1;
	}
	char ch;
	while( fscanf(fp, "%c", &ch) != EOF )
	{
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}