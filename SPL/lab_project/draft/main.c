#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
	char name[32];
	int matches;
	int total_run;
	int highest_score;
	float avg_score;
} Player;

void insert(Player* ptr, int n);
int highest(Player player[], int n);
int search(Player player[], char name[]);
void display(Player player[], int i);
int menu();
void sort_by_total(Player* ptr, int n);
void delete(Player* ptr, int n);
void update(Player* ptr);

int num_of_players = 0;
int main() {
    Player player[MAX];
    while (1) {
        int choice = menu();
        switch (choice) {
        case 1:
            printf("\nNo. of players: ");
            scanf("%d", & num_of_players);
            insert(player, num_of_players);
            break;

        case 2:
            printf("\nPRINTING ALL USERS DATA\n");
			printf("-------- --- ----- ----\n");
            if (num_of_players == 0) {
                printf("No data found! Please insert first.\n");
            } else {
                for (int i = 0; i < num_of_players; i++) {
                    display(player, i);
                }
            }
            break;

        case 3:
            getchar();
            printf("Who do you want to search (name): ");
            char name[32];
            fgets(name, 32, stdin);
            name[strcspn(name, "\n")] = '\0';
            int index = search(player, name);
            if (index == -1) {
                printf("Not Found !\n");
            } else {
                display(player, index);
            }
            break;

        case 4:
            int playerIndex = highest(player, num_of_players);
            if (playerIndex == -1) {
                printf("No data found!\n");
            } else {
                printf("\nPlayer %d, with %d runs has the highest score\n", playerIndex + 1, player[playerIndex].highest_score);
            }
            break;
		
		case 5:
			if (num_of_players == 0) {
				printf("Please insert data first then you can remove some...\n");
			}
			else {
				delete(player, num_of_players);
			}
			break;
		case 6:
			if (num_of_players == 0) {
				printf("Please insert data first then you can update some...\n");
			}
			else {
				update(player);
			}
			break;

        } // switch end
    }
    return 0;
}

void insert(Player* ptr, int n)
{
	for (int i=0; i<n; i++)
	{
		getchar();
		printf("\nEnter Information of player %d\n", i+1);
		char name[32];
		printf("Name: ");
		fgets(name, 32, stdin);
		name[strcspn(name, "\n")] = '\0';
		strcpy(ptr->name, name);
		printf("Matches: ");
		scanf("%d", &ptr->matches);
		printf("Total run: ");
		scanf("%d", &ptr->total_run);
		printf("Highest Score: ");
		scanf("%d", &ptr->highest_score);
		ptr->avg_score = (float) ptr->total_run / ptr->matches;
		ptr++;
	}
	printf("Great, inserting data done...\n");
}

int highest(Player player[], int n)
{
	int highestScore = -99;
	int index = -1;
	for (int i=0; i<n; i++)
	{
		if (player[i].highest_score > highestScore) {
			highestScore = player[i].highest_score;
			index = i;
		}
	}
	return index;
}

int search(Player player[], char name[])
{
	int index = -1;
	for (int i=0; i<MAX; i++)
	{
		if ( strcmp(player[i].name, name) ==0 ) {
			index = i;
			break;
		}
	}
	return index;
}

void display(Player player[], int i)
{
	printf("\nPlayer Information\n");
	printf("------ -----------\n");
	printf("Name: %s\n", player[i].name);
	printf("Matches: %d\n", player[i].matches);
	printf("Total Run: %d\n", player[i].total_run);
	printf("Highest Score: %d\n", player[i].highest_score);
	printf("Avg. Score: %.2f\n", player[i].avg_score);
}

int menu()
{
	printf("\n\nCricket Players Database\n");
	printf("------- ------- --------\n\n");
	printf("1) insert\n");
	printf("2) display all\n");
	printf("3) search\n");
	printf("4) highest score\n");
	printf("5) delete\n");
	printf("6) update\n");
	printf("0) exit\n");
	printf("Enter your Choice: ");
	int choice;
	scanf("%d", &choice);
	if (choice == 0) {
		exit(0);
	}
	return choice;
}

void sort_by_total(Player* ptr, int n) // by total run
{
	int check = -99;
	for (int i=0; i<n; i++)
	{
		ptr++;
	}
}

void delete(Player* ptr, int n)
{
	getchar();
	printf("\nWho do you want to remove from database? \n");
	printf("Enter name: ");
	char name[32];
	fgets(name, 32, stdin);
	name[strcspn(name, "\n")] = '\0';
	for (int i=0; i<n; i++)
	{
		if ( strcmp(ptr->name, name) == 0 ) {
			for (int j=i+1; j<n; j++) {
				ptr = ptr+1;
			}
		}
		ptr++;
		//num_of_players--;
	}
}

void update(Player* ptr)
{
	getchar();
	printf("\nWho do you want to update? \n");
	printf("Enter name: ");
	char name[32];
	fgets(name, 32, stdin);
	name[strcspn(name, "\n")] = '\0';
	int flag = 0;
	for (int i=0; i<num_of_players; i++)
	{
		if ( strcmp(ptr->name, name) == 0 ) {
			printf("\nEnter new Informations \n");
			char name1[32];
			printf("Name: ");
			fgets(name1, 32, stdin);
			name1[strcspn(name1, "\n")] = '\0';
			strcpy(ptr->name, name1);
			printf("Matches: ");
			scanf("%d", &ptr->matches);
			printf("Total run: ");
			scanf("%d", &ptr->total_run);
			printf("Highest Score: ");
			scanf("%d", &ptr->highest_score);
			ptr->avg_score = (float) ptr->total_run / ptr->matches;
			flag = 1;
		}
		ptr++;
	}
	if (flag == 0) {
		printf("Data wasn't updated, try again ...\n");
	}
	else {
		printf("Data Updated!\n");
	}
}