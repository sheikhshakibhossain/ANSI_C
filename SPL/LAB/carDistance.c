#include <stdio.h>

int main() {
	
	int kilometerDistance;
	scanf("%d", &kilometerDistance);

	int coverTime = kilometerDistance * 2; // takes 2 minutes to cover 1 km
	printf("%d minutos\n", coverTime);

	
	return 0;
}

