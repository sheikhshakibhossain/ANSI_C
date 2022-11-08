#include <stdio.h>

int main() 
{
	int test_case, r1, r2;
	FILE *fp;
	fp = fopen("sample.txt", "r");
	if (fp == NULL) {
		printf("error");
		return -1;
	}
	fscanf(fp, "%d %d %d", &test_case, &r1, &r2);
	fclose(fp);

	for (int i=1; i<=test_case; i++)
	{	
		for (int j=r1; j<=r2; j++) 
		{
			if (i==1 || i==test_case || j==1 ||j==r2) {
				printf("# ");
			}
			else {
				printf("%d ", j);
			}	
		}
		printf("\n");
	}
	return 0;
}