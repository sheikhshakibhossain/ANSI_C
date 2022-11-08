#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

// Declare structures here
typedef struct {
	char fname[16];
	char lname[16];
	int matches;
	int total_run;
	int highest_score;
	float avg_score;
} Player;

// Declare proto here
int menu();
void insert();
void load_file();
void update_data();
void display(int i);
void show_all();
int highest();
int search(char fname[], char lname[]);
void sort_by_total();
void delete();
void update_user_info();

// Declare global var. here
Player player[MAX];
int num_of_players = 0;
int main() {

    while (1) {
        int choice = menu();
		load_file(); // loads data from file
        switch (choice) {
        case 1:
            insert();
            break;

        case 2:
            show_all();
            break;

        case 3:
            getchar();
            printf("\n\nWho do you want to search ?\n");
			printf("--- -- --- ---- -- --------\n\n");
			printf("First Name: ");
            char fname[16];
            fgets(fname, 16, stdin);
            fname[strcspn(fname, "\n")] = '\0';
			printf("Last Name: ");
            char lname[16];
            fgets(lname, 16, stdin);
            lname[strcspn(lname, "\n")] = '\0';
            int index = search(fname, lname);
            if (index == -1) {
                printf("Not Found !\n");
            } else {
                display(index);
            }
            break;

        case 4:
			printf("\n\nLeaders Board\n");
			printf("------- -----\n");
            int playerIndex = highest();
            if (playerIndex == -1) {
                printf("No data found!\n");
            } else {
                printf("Mr. %s, with %d runs conquers the leader borad !!!\n", player[playerIndex].fname, player[playerIndex].highest_score);
            }
            break;
		
		case 5:
			if (num_of_players == 0) {
				printf("Please insert data first then you can remove some...\n");
			}
			else {
				delete();
			}
			break;
		case 6:
			if (num_of_players == 0) {
				printf("Please insert data first then you can update some...\n");
			}
			else {
				update_user_info();
			}
			break;

		case 7:
			sort_by_total();
			break;
		default:
			printf("Invalid Choice !!!\n");
			break;
        } // switch end
    }
    return 0;
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
	printf("7) sort by runs\n");
	printf("0) exit\n");
	printf("Enter your Choice: ");
	int choice;
	scanf("%d", &choice);
	if (choice == 0) {
		exit(0);
	}
	return choice;
}

void insert()
{
	FILE *fp;
	fp = fopen("data.txt", "a");
	if ( fp == NULL ) {
		exit(0);
	}
	printf("\nNo. of players: ");
	int n;
    scanf("%d", &n);
	for (int i=num_of_players; i<(n+num_of_players); i++)
	{
		getchar();
		printf("\nEnter Information of player %d\n", i+1);
		char fname[16];
		printf("First Name: ");
		fgets(fname, 16, stdin);
		fname[strcspn(fname, "\n")] = '\0';

		char lname[16];
		printf("Last Name: ");
		fgets(lname, 16, stdin);
		lname[strcspn(lname, "\n")] = '\0';

		strcpy(player[i].fname, fname);
		strcpy(player[i].lname, lname);
		fprintf(fp, "%s\n", player[i].fname);
		fprintf(fp, "%s\n", player[i].lname);
		printf("Matches: ");
		scanf("%d", &player[i].matches);
		fprintf(fp, "%d\n", player[i].matches);
		printf("Total run: ");
		scanf("%d", &player[i].total_run);
		fprintf(fp, "%d\n", player[i].total_run);
		printf("Highest Score: ");
		scanf("%d", &player[i].highest_score);
		fprintf(fp, "%d\n", player[i].highest_score);
		player[i].avg_score = (float) player[i].total_run / player[i].matches;
		fprintf(fp, "%f\n", player[i].avg_score);
	}
	fclose(fp);
	printf("Great, inserting data done ...\n");
}

void load_file()
{
	FILE *fp;
	fp = fopen("data.txt", "r");
	if (fp == NULL) {
		printf("Can't read data from file, create data.txt or insert");
		fclose(fp);
		return;
	}
	float chk;
	int i = 0;
	num_of_players = 0;
	while ( fscanf(fp, "%f", &chk) != EOF )
	{
		fscanf(fp, "%s", player[i].fname);
		fscanf(fp, "%s", player[i].lname);
		fscanf(fp, "%d", &player[i].matches);
		fscanf(fp, "%d", &player[i].total_run);
		fscanf(fp, "%d", &player[i].highest_score);
		fscanf(fp, "%f", &player[i].avg_score);
		i++;
		num_of_players++;
	}
	fclose(fp);
}

void update_data()
{
	FILE *fp;
	fp = fopen("data.txt", "w");
	if ( fp == NULL ) {
		exit(0);
	}

	for (int i=0; i<num_of_players; i++)
	{
		fprintf(fp, "%s\n", player[i].fname);
		fprintf(fp, "%s\n", player[i].lname);
		fprintf(fp, "%d\n", player[i].matches);
		fprintf(fp, "%d\n", player[i].total_run);
		fprintf(fp, "%d\n", player[i].highest_score);
		fprintf(fp, "%f\n", player[i].avg_score);
	}
	fclose(fp);
	printf("Data updated into file ...\n");	
}

void display(int i)
{
	printf("\nPlayer Information\n");
	printf("------ -----------\n");
	printf("First Name: %s\n", player[i].fname);
	printf("Last Name: %s\n", player[i].lname);
	printf("Matches: %d\n", player[i].matches);
	printf("Total Run: %d\n", player[i].total_run);
	printf("Highest Score: %d\n", player[i].highest_score);
	printf("Avg. Score: %.2f\n", player[i].avg_score);
}

void show_all()
{
    printf("\nPRINTING ALL USERS DATA\n");
	printf("-------- --- ----- ----\n");
    if (num_of_players == 0) {
    	printf("No data found! Please insert first.\n");
	} else {
        for (int i = 0; i < num_of_players; i++) {
        	display(i);
    	}
    }
}

int highest()
{
	int highestScore = -99;
	int index = -1;
	for (int i=0; i<num_of_players; i++)
	{
		if (player[i].highest_score > highestScore) {
			highestScore = player[i].highest_score;
			index = i;
		}
	}
	return index;
}

int search(char fname[], char lname[])
{
	int index = -1;
	for (int i=0; i<num_of_players; i++)
	{
		if ( strcmp(player[i].fname, fname) == 0 && strcmp(player[i].lname, lname) == 0 ) {
			index = i;
			break;
		}
	}
	return index;
}


void sort_by_total() // by total run
{
	for (int i=0; i<num_of_players; i++)
	{
		for (int j=i+1; j<num_of_players; j++)
		{
			if ( player[i].total_run < player[j].total_run )
			{
				Player temp = player[i];
				player[i] = player[j];
				player[j] = temp;
			}
		}
	}
	printf("\nSorting done according to total runs !!!\n\n"); 
	update_data(); // writing into file
}

void delete()
{
	int flag = 0;
    getchar();
	printf("\nWho do you want to remove from database? \n");
	printf("--- -- --- ---- -- ------ ---- --------- \n");
	printf("First Name: ");
    char fname[16];
    fgets(fname, 16, stdin);
    fname[strcspn(fname, "\n")] = '\0';
	printf("Last Name: ");
    char lname[16];
    fgets(lname, 16, stdin);
    lname[strcspn(lname, "\n")] = '\0';

	for (int i=0; i<num_of_players; i++)
	{
		if ( strcmp(player[i].fname, fname) == 0 && strcmp(player[i].lname, lname) == 0 ) 
		{
			for (int j=i+1; j<num_of_players; j++) {
				player[i] = player[j];
			}
			num_of_players--;
			flag = 1;
		}
	}
	if (flag == 0) { 
		printf("Not found! User wasn't removed ...\n");
	}
	else {
		printf("User, %s removed !\n", fname);
		update_data(); // writing into file
	}

}

void update_user_info()
{
	getchar();
	printf("\nWho do you want to update? \n");
	printf("--- -- --- ---- -- ------- \n");
	printf("First name: ");
	char fname[16];
	fgets(fname, 16, stdin);
	fname[strcspn(fname, "\n")] = '\0';
	printf("First name: ");
	char lname[16];
	fgets(lname, 16, stdin);
	lname[strcspn(lname, "\n")] = '\0';

	int flag = 0;
	for (int i=0; i<num_of_players; i++)
	{
		if ( strcmp(player[i].fname, fname) == 0 && strcmp(player[i].lname, lname) == 0 ) {
			printf("\nEnter new Informations \n");
			char fname1[16];
			printf("Name: ");
			fgets(fname1, 16, stdin);
			fname1[strcspn(fname1, "\n")] = '\0';
			strcpy(player[i].fname, fname1);

			char lname1[16];
			printf("Name: ");
			fgets(lname1, 16, stdin);
			lname1[strcspn(lname1, "\n")] = '\0';
			strcpy(player[i].lname, lname1);

			printf("Matches: ");
			scanf("%d", &player[i].matches);
			printf("Total run: ");
			scanf("%d", &player[i].total_run);
			printf("Highest Score: ");
			scanf("%d", &player[i].highest_score);
			player[i].avg_score = (float) player[i].total_run / player[i].matches;
			flag = 1;
		}
	}
	if (flag == 0) {
		printf("Data wasn't updated, try again ...\n");
	}
	else {
		printf("Data Updated!\n");
		update_data();
	}
}
