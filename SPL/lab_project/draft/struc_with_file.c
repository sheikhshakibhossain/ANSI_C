#include <stdio.h>

typedef struct {
	char fname[12];
	char lname[12];
	//char name[32];
	int matchs;
	int total;
	int highest;
} Player;

int main() 
{
	FILE *fp;
	fp = fopen("id.txt", "r");
	if (fp == NULL) {
		return -1;
	}
	
	Player pl[2];
	for (int i=0; i<2; i++)
	{
		//fgets(pl[i].name, 32, fp);
		fscanf(fp, "%s %s", &pl[i].fname, &pl[i].lname);
		fscanf(fp, "%d", &pl[i].matchs);
		fscanf(fp, "%d", &pl[i].total);
		fscanf(fp, "%d", &pl[i].highest);
	}
	fclose(fp);

	for (int i=0; i<2; i++)
	{
		printf("%s\n", pl[i].fname);
		printf("%s\n", pl[i].lname);
		printf("%s\n", pl[i].name);
		printf("%d\n", pl[i].matchs);
		printf("%d\n", pl[i].total);
		printf("%d\n", pl[i].highest);
	}
	return 0;
}
