#include <stdio.h>

typedef struct 
{
	char name[50];
}	NAME;

int main() 
{
	NAME person[3];
	FILE *fp;
	fp = fopen("names.txt", "r");
	if (fp == NULL) {
		printf("error");
		return -1;
	}
	
	for (int i=0; i<3; i++) {
		fgets(person[i].name, 50, fp);
	}
	fclose(fp);

	for (int i=0; i<3; i++) {
		printf("%s", person[i].name); // fgets new line diye dey
	}

	return 0;
}