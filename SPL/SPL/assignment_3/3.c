#include <stdio.h>

int main() 
{
	FILE *fp;
	fp = fopen("accounts.txt", "r");
	if (fp == NULL) {
		printf("file doesnt exists\n");
		return -1;
	}
	char str[200];
	while( fscanf(fp, "%s", str) != EOF )
	{
		fflush(fp);
		fgets(str, 200, fp);
		fflush(fp);
		//fscanf(fp, "%s", str);
		printf("%s", str);
		fflush(fp);
	}
	fclose(fp);
	return 0;
}