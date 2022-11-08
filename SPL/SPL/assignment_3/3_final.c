#include <stdio.h>

int main() 
{
	FILE *fp;
	fp = fopen("accounts.txt", "r");
	if (fp == NULL) {
		printf("file doesnt exists\n");
		return -1;
	}
	int acc, balance;
	char fname[16], lname[16];
	while( fscanf(fp, "%s", fname) != EOF )
	{
		fflush(fp);
		fscanf(fp, "%d %s %s %d", &acc, &lname, &fname, &balance);
		fflush(fp);
		printf("%d\t%s\t%s\t%d\n", acc, lname, fname, balance);
		fflush(fp);
	}
	fclose(fp);
	return 0;
}