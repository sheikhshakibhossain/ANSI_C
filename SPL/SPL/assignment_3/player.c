#include <stdio.h>

struct Player {
	char name[40];
	int matches;
	int total_run;
	int highest_score;
	float avg_score;
};

int main() 
{
	struct Player player[10];
	for (int i=0; i<10; i++) // (i)
	{
		gets(player[i].name);
		scanf("%d %d %d", &player[i].matches, &player[i].total_run, &player[i].highest_score);
		player[i].avg_score = (float) player[i].total_run / player[i].matches;
	}

	int highestScore = -99;
	int playerIndex = -1;
	for (int i=0; i<10; i++) // (ii)
	{
		if (player[i].highest_score > highestScore) {
			highestScore = player[i].highest_score;
			playerIndex = i;
		}
	}
	printf("Player %d, with %d runs has the highest score\n", playerIndex+1, highestScore);

	for (int i=0; i<10; i++) // (iii)
	{
		if ( (player[i].matches >= 50) && (player[i].avg_score > 50) ) {
			printf("Name: %s\n", player[i].name);
			printf("Matches: %d\n", player[i].matches);
			printf("Total Run: %d\n", player[i].total_run);
			printf("Highest Score: %d\n", player[i].highest_score);
			printf("Avg. Score: %f\n", player[i].avg_score);
		}
	}
	
	for (int i=0; i<10; i++) // (iv)
	{
		if ( player[i].name[0] == 'A' ) { // name starts with 'A', so name array index 0 has to be 'A'
			printf("Name: %s\n", player[i].name);
			printf("Matches: %d\n", player[i].matches);
			printf("Total Run: %d\n", player[i].total_run);
			printf("Highest Score: %d\n", player[i].highest_score);
			printf("Avg. Score: %f\n", player[i].avg_score);
		}
	}

	return 0;
}