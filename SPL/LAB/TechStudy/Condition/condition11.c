#include <stdio.h>

int main() {

	// 11. day name of week | starts from saturday in bangladesh
	int day;
	scanf("%d", &day);
	switch(day) {
		case 1:
		printf("saturday");
		break;

		case 2:
		printf("sunday");
		break;

		case 3:
		printf("monday");
		break;

		case 4:
		printf("tuesday");
		break;

		case 5:
		printf("wednesday");
		break;

		case 6:
		printf("thursday");
		break;

		case 7:
		printf("friday");
		break;
	}

	return 0;
}

