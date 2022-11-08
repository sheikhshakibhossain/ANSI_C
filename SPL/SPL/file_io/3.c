#include <stdio.h>

int main() 
{
	int ball;
	float PI;
	char first_letter;

	FILE *fp;
	fp = fopen("input.sample", "r"); // reading mode
	fscanf(fp, "%d %f %c", &ball, &PI, &first_letter); // reads from given file
	fclose(fp);

	printf("Ball: %d\nPI: %f\nFirst letter: %c\n", ball, PI, first_letter);
	return 0;
}