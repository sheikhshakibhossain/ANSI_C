#include <stdio.h>

int main() {
	
	int sum = 0, counter = 0;
	while (1)
	{
		int num;
		scanf("%d", &num);
		if (num == 0)
			break;
		else if (num > 0){
			sum += num;
			counter++;
		}
	}
	if (counter != 0)
		printf("Avarage : %f\n", (float)sum / counter);
	
	return 0;
}

