#include <stdio.h>

int main() {
	
	int test;
	scanf("%d", &test);
	int result[100][100];
	for (int i=0; i<100; i++)
		for (int j=0; j<100; j++)
			result[i][j] = -1; // initialize all by -1

	for (int i=0; i<test; i++)
	{
		int day, query;
		scanf("%d", &day);
		int earn[day], spent[day];

		for (int j=0; j<day; j++)
			scanf("%d", &earn[j]);
		for (int j=0; j<day; j++)
			scanf("%d", &spent[j]);
		
		scanf("%d", &query);
		for (int j=0; j<query; j++) 
		{
			int index, totalEarn=0, totalSpent=0;
			scanf("%d", &index);
			for (int k=0; k<=index; k++) {
				totalEarn += earn[k];
				totalSpent += spent[k];
			}

			if ( totalEarn - totalSpent < 0 )
				result[i][index] = 0;
			else
				result[i][index] = 1;
		}
	}

	for (int i=0; i<test; i++) // output
	{
		for (int j=0; j<100; j++) 
		{
			if (result[i][j] != -1)
				printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}

