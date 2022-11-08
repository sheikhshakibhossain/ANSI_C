#include <stdio.h>

int main() {
	
	int num;
	scanf("%d", &num);

	for (int i=2; i>=0; i--)
	{
		int guess;
		scanf("%d", &guess);

		if (guess == num) {
			printf("Right, Player-2 wins!\n");
			break;
		}
		if (guess != num)
			printf("Wrong! %d Chance(s) Left!\n", i);
		if (guess != num && i==0)
			printf("Player-1 wins!\n");
	}
	
	return 0;
}

