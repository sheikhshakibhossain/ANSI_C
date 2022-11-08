#include <stdio.h>
#include <stdlib.h>

int get_choice(void)
{
	int choice;
	do 
	{
		printf("Enter your choice: ");
		scanf("%d", &choice);
		if (choice < 0 || choice > 5) {
			printf("Wrong Choice !\n");
		}
	}
	while (choice < 0 || choice > 5 );
	if (choice == 0) {
		exit(0);
	}
	return choice;
}

int welcome_screen() 
{
	printf("\n\t*** Smart Phones Database ***\n\n");
	printf("1) insert\n");
	printf("2) delete\n");
	printf("3) search\n");
	printf("4) update\n");
	printf("5) sort\n");
	printf("0) exit\n");
	int choice = get_choice();
	return choice;
}
