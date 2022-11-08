#include <stdio.h>

int main()
{
	int x,hr,min,sec;
	printf("Enter time in seconds: ");
	scanf("%d", &x);

	hr = x / 3600;
	min = (x / 60) - (hr * 60);
	sec = x - ((hr * 3600) + (min * 60));

	printf("%d Hour %d Min %d Sec \n", hr,min,sec);

	return 0;
}

